call Path.bat

g++ Server.o IServer.o Main.o -o run.exe -static-libstdc++ -static-libgcc
PAUSE