cmake_minimum_required(VERSION 3.10)
project(Nyar)

# Especifica la versión de C++
set(CMAKE_CXX_STANDARD 17)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Añade el directorio lib a los directorios de inclusión
include_directories(./Bytecode/src)

# Incluye los encabezados del runtime de ANTLR
include_directories($ENV{ANTLRRUNTIMEH})
    
# Añade la biblioteca del runtime de ANTLR
link_directories($ENV{ANTLRRUNTIME})

# incluir encambezados de llvm
include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

# Busca todos los archivos .cpp en src/lib
file(GLOB LIB_SOURCES "./Bytecode/src/lib/*.cpp")

# Añade la ruta de los archivos fuente
set(SOURCE_FILES
    ./Bytecode/src/main.cpp
    ./Bytecode/src/visitor/NyarVisitor.cpp
    ${LIB_SOURCES}
)

# Crea el ejecutable
add_executable(Nyar ${SOURCE_FILES})

# Añade los directorios de búsqueda de las bibliotecas para el proyecto Nyar
target_link_directories(Nyar PUBLIC)

llvm_map_components_to_libnames(llvm_libs support core irreader)

# Enlaza el runtime de ANTLR y LLVM con tu proyecto
target_link_libraries(Nyar antlr4-runtime ${llvm_libs})
