#include "antlr4-runtime.h"

#include "lib/parser/VMLexer.h"
#include "lib/parser/VMParser.h"
#include "llvm/Support/TargetSelect.h"
#include "src/visitor/Visitor.h"
#include "src/JIT.h"

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Support/TargetSelect.h>

using namespace std;
using namespace antlr4;

std::unique_ptr<llvm::Module> abrirArchivo(int argc, char *argv[])
{

    if (argc <= 1) {
        return nullptr;
    }

    string linea;
    vector<string> params, path_files;

    for (int i = 1; i < argc; i++)
    {
        string opcion = argv[i];
        if (opcion.length() > 0 && opcion[0] != '-')
        {
            path_files.push_back(opcion);
            continue;
        }
        params.push_back(opcion.substr(1));
    }

    if (!path_files.empty())
    {
        ifstream file(path_files[0]);
        if (!file.good())
        {
            printf("El archivo no existe, revise la ruta.\n");
            exit(EXIT_FAILURE);
        }

//        string line;
//        while(getline(file,line)) {
//            cout << line << endl;
//        }

        ANTLRInputStream input(file);
        VMLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        VMParser parser(&tokens);
        VMParser::ProgramContext *tree = parser.program();

        VMVisitor visitor;
        visitor.visitProgram(tree);

        cout << tree -> toStringTree(&parser) << endl;               

        visitor.saveModule("Nyar.ll");
        auto nyarModule = visitor.getModule();        

        // convert to unique_ptr for return
        return std::unique_ptr<llvm::Module>(nyarModule);
    }
    return nullptr;
}

int main(int argc, char *argv[])
{
    // Cargar el archivo IR
    auto module = abrirArchivo(argc, argv);
    if (!module)
    {
        cout << "Error al cargar el módulo" << endl;
        return EXIT_FAILURE;
    }

    if(verifyModule(*module)) {
        cout << "Error en el módulo" << endl;
        return EXIT_FAILURE;
    }

    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    llvm::InitializeNativeTargetAsmParser();

    // Crear el JIT
    auto jitExpected = llvm::orc::KaleidoscopeJIT::Create();

    if (!jitExpected) {
        cout << "Error al crear el JIT" << endl;
        cerr << llvm::toString(jitExpected.takeError()) << endl;
        return EXIT_FAILURE;
    }

    auto jit = std::move(jitExpected.get());
    
    llvm::orc::ThreadSafeContext tsc(std::make_unique<llvm::LLVMContext>());
    llvm::orc::ThreadSafeModule TSM(std::move(module), tsc);

    auto Err = jit->addModule(std::move(TSM));
    
    if (Err) {
        cout << "Error al agregar el módulo al JIT" << endl;
        return EXIT_FAILURE;
    }

    auto symbol = jit->lookup("main");
    if (!symbol) {
        cout << "Error al buscar el símbolo" << endl;
        return EXIT_FAILURE;
    }
    
    auto mainSymbol = symbol->getAddress();

    using MainFunction = void(*)();
    auto mainFn = mainSymbol.toPtr<MainFunction>();

    if (!mainFn) {
        cout << "Error al obtener la dirección de la función" << endl;
        return EXIT_FAILURE;
    }
    mainFn();

    return 0;
}
