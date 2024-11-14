#include "antlr4-runtime.h"

#include "lib/parser/VMLexer.h"
#include "lib/parser/VMParser.h"

#include "src/visitor/Visitor.h"

using namespace std;
using namespace antlr4;

int abrirArchivo(int argc, char *argv[])
{

    if (argc <= 1)
        return -1;

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
            return EXIT_FAILURE;
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
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int result = abrirArchivo(argc, argv);
    cout << "oki doki" << endl;
    if (result != -1)
    {
        return result;
    }
}