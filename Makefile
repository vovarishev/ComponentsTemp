CC=g++
VPATH = $(CURDIR)/code

all: run

run: server client manager
	$(CC) IManager.o Server.o Server2.o Main.o -o run $(libs)

manager: IManager.o
server: Server.o Server2.o
client: Main.o

IManager.o:IManager.cpp
	$(CC) $^ -c
Server.o:Server.cpp
	$(CC) $^ -c
Server2.o:Server2.cpp
	$(CC) $^ -c
Main.o:Main.cpp
	$(CC) $^ -c

clean:
	rm -rf *.o run