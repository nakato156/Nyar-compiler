#!/bin/sh

cd VM
clear
swift utils/make-pkgconfigllvm.swift
swift utils/make-pkgconfigantlr.swift
swift build -Xcc -v

cd .build/x86_64-unknown-linux-gnu/debug
./Compiler 