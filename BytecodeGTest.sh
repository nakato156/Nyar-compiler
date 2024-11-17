rm -rf ./GrammarTest/Bytecode

cd BytecodeGrammar

antlr4 ./*.g4 -Dlanguage=Java -no-listener -visitor -o ../GrammarTest/Bytecode

cd ..

mkdir GrammarTest
cd GrammarTest
cd Bytecode

javac Nyar*.java
grun Nyar program -gui ../../test.ae
