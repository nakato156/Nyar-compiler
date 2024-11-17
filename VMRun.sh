cd VM

rm -r -f build &&
make clean
mkdir build && cd build
cmake ..
make

./VM ../../build/maid.ny

#cat Nyar.ll