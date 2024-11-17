rm -rf ./GrammarTest/Bytecode

cd VM
cd Grammar

antlr4 ./*.g4 -Dlanguage=Java -no-listener -visitor -o ../../GrammarTest/VM

cd ..
cd ..

mkdir GrammarTest
cd GrammarTest
cd VM

javac VM*.java
grun VM program -gui ../../build/maid.ny
