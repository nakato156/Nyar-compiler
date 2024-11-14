cmake_minimum_required(VERSION 3.10)
project(Nyar)

# Especifica la versión de C++
set(CMAKE_CXX_STANDARD 17)

# Encuentra LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Añade la biblioteca del runtime de ANTLR
link_directories($ENV{ANTLRRUNTIME})

# Configura las definiciones de LLVM
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

# Busca todos los archivos .cpp en Bytecode/src
file(GLOB LIB_SOURCES "${CMAKE_SOURCE_DIR}/Bytecode/src/**/*.cpp")

# Añade la ruta de los archivos fuente
set(SOURCE_FILES
    ${CMAKE_SOURCE_DIR}/Bytecode/main.cpp
    ${LIB_SOURCES}
)

# Crea el ejecutable
add_executable(Nyar ${SOURCE_FILES})

# Añade los directorios de inclusión para el objetivo Nyar
target_include_directories(Nyar PUBLIC
    ${CMAKE_SOURCE_DIR}/Bytecode/src
    $ENV{ANTLRRUNTIMEH}
    ${LLVM_INCLUDE_DIRS}
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Bytecode/src>
)

add_library(NyarHeaders INTERFACE)
target_include_directories(NyarHeaders INTERFACE ${CMAKE_SOURCE_DIR}/Bytecode/src)

# Enlaza el runtime de ANTLR y LLVM con tu proyecto
llvm_map_components_to_libnames(llvm_libs support core irreader)
target_link_libraries(Nyar antlr4-runtime ${llvm_libs})