case "$OSTYPE" in
    linux*)     antlr4 *.g4 -Dlanguage=Cpp -no-listener -visitor -o ./src/lib;;
    darwin*)    antlr *.g4 -Dlanguage=Cpp -no-listener -visitor -o ./src/lib
esac