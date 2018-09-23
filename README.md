# Classroom examples from Lectures 06

## generate executable in Debug mode, test, and clean (using CMake)
```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
./ex06
make clean
```

## generate executable in Release mode, test, and install to ~/bin (using CMake)

From the "build" directory...

```
cmake -DCMAKE_BUILD_TYPE=Release ..
make
./ex06
make install
```

## Debugging the CMakeLists.txt file

You can see what the CMake-generated Makefile is running by using the following command during the build process.

```
make clean
make -n
```
