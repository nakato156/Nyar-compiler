cmake_minimum_required(VERSION 3.22)
project(SwiftLLVM LANGUAGES C Swift)

set(min_supported_swift_version 5.9)
if(CMAKE_Swift_LANGUAGE_VERSION VERSION_LESS ${min_supported_swift_version})
    message(FATAL_ERROR "Outdated Swift: "
    "Swift ${min_supported_swift_version} or newer")
endif()

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_subdirectory(Sources)