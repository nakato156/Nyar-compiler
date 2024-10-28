import cppllvm
import Antlr4
import AntlrNya
import Foundation

func abrirArchivo(_ arguments: [String],_ count: Int) -> Int {

    var fileManager = FileManager.default

    if(count <= 1) {
        return -1;
    }

    print("Number of arguments: \(count)")
    var parameters: [String] = [];
    var path_files: [String] = [];
    
    for arg in arguments {

        if(arg.count > 0 && arg[arg.startIndex] == "-") {
            var argTemp = arg
            argTemp.removeFirst()
            print(argTemp)
            path_files.append(argTemp)
            continue
        }
    }

    if fileManager.fileExists(atPath: path_files[0]) {
        
        if let fileContent = fileManager.contents(atPath: path_files[0]) {
            print(String(data:fileContent, encoding: .utf8)!)
        }

    } else {
           print("Archivo no existe;")
           exit(EXIT_FAILURE)         
    }


    //var input = Antlr4.ANTLRInputStream()
    //var lexer = AntlrNya.VMParser(input)


    return 1
}

func main() -> Int {
    let result: Int = abrirArchivo(CommandLine.arguments, CommandLine.arguments.count)

    print("Archivo Cargado")

    if (result != -1) {
        return result
    }
    else {
        return 0
    }
}

print(main())