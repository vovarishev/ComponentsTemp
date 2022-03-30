CC=g++
VPATH = $(CURDIR)/code

all: run

run: interfaces server factories client
	$(CC) IUnk.o IClassFactory.o S1Factory.o Server.o Server2.o Main.o -o run $(libs)
interfaces: IUnk.o IClassFactory.o
server: Server.o Server2.o
factories: S1Factory.o S2Factory.o
client: Main.o

IUnk.o:IUnk.cpp
	$(CC) $^ -c
IClassFactory.o:IClassFactory.cpp
	$(CC) $^ -c
S1Factory.o:S1Factory.cpp
	$(CC) $^ -c
Server.o:Server.cpp
	$(CC) $^ -c
Server2.o:Server2.cpp
	$(CC) $^ -c
Main.o:Main.cpp
	$(CC) $^ -c


clean:
	rm -rf *.o run