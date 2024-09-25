cmake_minimum_required(VERSION 3.10)
project(Nyar)

# Especifica la versión de C++
set(CMAKE_CXX_STANDARD 17)

# Añade el directorio lib a los directorios de inclusión
include_directories(./src/lib)
include_directories(./src/visitor/)

# Incluye los encabezados del runtime de ANTLR
include_directories($ENV{ANTLRRUNTIMEH})

# Añade la biblioteca del runtime de ANTLR
link_directories($ENV{ANTLRRUNTIME})

#incluir encambezados de llvm
include_directories($ENV{LLVM18I})

# Busca todos los archivos .cpp en src/lib
file(GLOB LIB_SOURCES "./src/lib/*.cpp")

# Añade la ruta de los archivos fuente
set(SOURCE_FILES
    ./src/main.cpp
    ./src/visitor/NyarVisitor.cpp
    ${LIB_SOURCES}
)

# Crea el ejecutable
add_executable(Nyar ${SOURCE_FILES})

# Añade los directorios de búsqueda de las bibliotecas para el proyecto Nyar
target_link_directories(Nyar PUBLIC $ENV{LLVM18L})

# Enlaza el runtime de ANTLR y LLVM con tu proyecto
target_link_libraries(Nyar antlr4-runtime LLVM)
