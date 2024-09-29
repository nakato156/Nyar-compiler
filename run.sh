rm -r -f build &&
make clean
mkdir build && cd build
cmake ..
make
