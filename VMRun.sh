rm -rf ./build/VM &&
make clean

mkdir -p ./build/VM && cd ./build/VM

cmake -DCMAKE_BUILD_TYPE=Debug -S ../../VM/ -B ./
make
