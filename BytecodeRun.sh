rm -rf ./build/bytecode &&
make clean

mkdir -p ./build/bytecode && cd ./build/bytecode

cmake -S ../../ -B ./
make -j$(nproc)

./Nyar ../../test.ae