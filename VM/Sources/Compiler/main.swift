import cppllvm
//import Antlr4
import AntlrNya
import Foundation

func abrirArchivo(_ arguments: [String],_ count: Int) -> Int {

    if(count <= 1) {
        return -1;
    }

    print("Number of arguments: \(count)")
    var parameters: [String] = [];
    var path_files: [String] = [];
    
    for arg in arguments {
        if(arg.count > 0 && arguments[0] != "-") {
            path_files.append(arg)
            continue
        }
        let index = arg.index(arg.startIndex, offsetBy:1)
        parameters.append(String(arg[index]))
    }

    if(!path_files.isEmpty) {
        if !FileManager.default.fileExists(atPath: path_files[0]) {
           print("Archivo no existe;")
           exit(EXIT_FAILURE) 
        }

        if let fileData = FileManager.default.contents(atPath: path_files[0]),
            let fileContent = String(data: fileData, encoding: .utf8) {
                
                let lexer = VMLexer()
                let parser = VMParser()

                antlr4.ANTLRInputStream(std.string_view(path_files[0]))
                


            }
    }


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