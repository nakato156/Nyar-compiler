// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Compiler-Backend",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .executable(
            name: "Compiler",
            targets: ["Compiler"]),
    ],
    dependencies: [
        .package(url: "https://github.com/antlr/antlr4.git", from: "4.13.2")
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .systemLibrary(
            name: "llvm",
            pkgConfig: "cppllvm",
            providers: [
                .brew(["llvm"]),
                .apt(["llvm"])
            ]),
        .target(
            name: "AntlrNya",
            dependencies: [
                .product(name:"Antlr4", package:"Antlr4")
            ]
        ),
        .executableTarget(
            name: "Compiler",
            dependencies: [
                "AntlrNya",
                "llvm", 
                .product(name:"Antlr4", package:"Antlr4")
            ],
            swiftSettings: [
                .interoperabilityMode(.Cxx)
            ]
        ),
    ],
    cxxLanguageStandard: .cxx17
)
