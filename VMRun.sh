cd VM

rm -r -f build &&
make clean
mkdir build && cd build
cmake ..
make

./VM ../test.nya

cat Nyar.ll