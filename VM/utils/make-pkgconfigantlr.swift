#!/usr/bin/env swift

//From https://github.com/llvm-swift/LLVMSwift/blob/master/utils/make-pkgconfig.swift
//If brew installed use that location if not use other

import Foundation

#if os(Linux)
  let libCPP = "-L/usr/lib -lc++"
#elseif os(macOS)
  let libCPP = "-lc++"
#endif

/// Runs the specified program at the provided path.
/// - parameter path: The full path of the executable you
///                   wish to run.
/// - parameter args: The arguments you wish to pass to the
///                   process.
/// - returns: The standard output of the process, or nil if it was empty.

extension String: Error {
  /// Replaces all occurrences of characters in the provided set with
  /// the provided string.
  func replacing(charactersIn characterSet: CharacterSet,
                 with separator: String) -> String {
    let components = self.components(separatedBy: characterSet)
    return components.joined(separator: separator)
  }
}

func makeFile() throws {
   
  let pkgConfigPath = "/usr/lib/pkgconfig"
  let pkgConfigDir = URL(fileURLWithPath: pkgConfigPath)

  let antlrPath = pkgConfigDir.appendingPathComponent("cppantlr.pc")

  /// Extract the info we need from llvm-config
  /// Emit the pkg-config file to the path

  let s = [
    "Name: cppantlr",
    "Description: The antlr library",
    "Version: 3.12.3",
    "Cflags: -I/usr/include/antlr4-runtime",
    "Libs: -L/usr/include/antlr4-runtime",
    "Requires.private:",
  ].joined(separator: "\n")

  print("Writing pkg-config file to \(antlrPath.path)...")

  try s.write(toFile: antlrPath.path, atomically: true, encoding: .utf8)

  print("\nSuccessfully wrote pkg-config file!")
  print("Make sure to re-run this script when you update LLVM.")
}

do {
  try makeFile()
} catch {
  print("error: \(error)")
  exit(-1)
}