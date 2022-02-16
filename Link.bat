call Path.bat

g++ Server.o IManager.o Main.o -o run.exe -static-libstdc++ -static-libgcc
echo Linked sucsessfull!
PAUSE