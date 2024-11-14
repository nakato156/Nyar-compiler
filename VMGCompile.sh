cd VM
cd Grammar

antlr4 ./*.g4 -Dlanguage=Cpp -no-listener -visitor -o ../lib/parser