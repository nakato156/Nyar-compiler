rm -rf ./Study/TestVM

cd VM
cd Grammar

antlr4 ./*.g4 -Dlanguage=Java -no-listener -visitor -o ../../Study/TestVM

cd ..
cd ..

cd Study
cd TestVM

javac VM*.java
grun VM program -gui ../../build/maid.ny
