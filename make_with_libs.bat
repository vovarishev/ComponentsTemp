call MinGW_Path.bat

mingw32-make -f Makefile libs="-static-libstdc++ -static-libgcc"
PAUSE