call Path.bat

g++ IUnk.o Server.o Server2.o IManager.o Main.o -o run.exe -static-libstdc++ -static-libgcc
echo Linked
PAUSE