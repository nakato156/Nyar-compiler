rm -rf ./build/VM &&
make clean

mkdir -p ./build/VM && cd ./build/VM

cmake -S ../../VM/ -B ./
make

./VM ../bytecode/maid.ny