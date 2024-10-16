// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Swift-Backend",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "Swift-Backend",
            targets: ["Swift-Backend"]),
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
                .brew(["llvm"])
            ]),
        .target(
            name: "Swift-Backend",
            dependencies: [
                "llvm", 
                .product(name:"Antlr4", package:"Antlr4")
                ],
            publicHeadersPath: "include",
            cxxSettings: [
                .define("USE_CLANG"),
            ],
            linkerSettings: [
                .linkedLibrary("libc++")
            ]
        ),
    ],
    cxxLanguageStandard: .cxx17
)
