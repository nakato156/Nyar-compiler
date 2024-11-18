#include "antlr4-runtime.h"

#include "lib/parser/VMLexer.h"
#include "lib/parser/VMParser.h"
#include "llvm/Support/TargetSelect.h"
#include "src/visitor/Visitor.h"
#include "src/JIT.h"

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

        // Crear un LLVM context y un módulo
        //llvm::LLVMContext llvmContext;
        //auto module = std::make_unique<llvm::Module>("NyarModule", llvmContext);

        // Aquí es donde debes agregar la conversión del árbol AST
        // a un módulo de LLVM. El código de conversión depende
        // de cómo estés representando las instrucciones en tu AST
        // y cómo quieras transformarlas a IR de LLVM.

        // Por ejemplo, si tienes una función en el AST y quieres
        // agregarla al módulo, puedes hacerlo de la siguiente manera:
        
        //llvm::IRBuilder<> builder(llvmContext);

        // Crear una función simple (esto es solo un ejemplo)
        //llvm::FunctionType *funcType = llvm::FunctionType::get(llvm::Type::getVoidTy(llvmContext), false);
        //llvm::Function *func = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, "myFunction", *module);

        // Agregar instrucciones a la función, esto es solo un ejemplo.
        //llvm::BasicBlock *entry = llvm::BasicBlock::Create(llvmContext, "entry", func);
        //builder.SetInsertPoint(entry);
        //builder.CreateRetVoid();

        // Ahora tenemos un módulo con una función simple
        // Puedes procesar más cosas del AST y construir el módulo de acuerdo a tus necesidades

        // Guardar el módulo en un archivo .ll (opcional)
        //std::error_code EC;
        //llvm::raw_fd_ostream file_out("Nyar.ll", EC, llvm::sys::fs::OF_Text);
        //module->print(file_out, nullptr);

        return nullptr; // 
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

    // Crear el JIT
    //auto jit = llvm::orc::KaleidoscopeJIT::Create();

    // llvm::InitializeNativeTarget();
    // llvm::InitializeNativeTargetAsmPrinter();
    // llvm::InitializeNativeTargetAsmParser();
    
    // module->setDataLayout(jit->tar());
    // if (!jit)
    // {
    //     llvm::errs() << "Error al crear el JIT: " << toString(jit.takeError()) << "\n";
    //     return EXIT_FAILURE;
    // }

    return 0;
}
