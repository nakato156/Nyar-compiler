cd VMGrammar

case "$OSTYPE" in
    linux*)     antlr4 ./*.g4 -Dlanguage=Cpp -no-listener -visitor -o ../VM/Sources/AntlrNya/lib/;;
    darwin*)    antlr ./*.g4 -Dlanguage=Cpp -no-listener -visitor -o ../VM/Sources/AntlrNya/lib/
esac