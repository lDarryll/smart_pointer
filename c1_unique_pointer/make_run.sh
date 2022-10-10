clear
cd build
rm -rf *
cmake ..
make -j40
clear
./demo
cd ..