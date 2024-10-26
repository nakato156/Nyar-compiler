cd VMGrammar

case "$OSTYPE" in
    linux*)     antlr4 ./*.g4 -Dlanguage=Cpp -no-listener -visitor -o ../VM/Sources/AntlrNya/include/lib/;;
    darwin*)    antlr ./*.g4 -Dlanguage=Cpp -no-listener -visitor -o ../VM/Sources/AntlrNya/include/lib/
esac