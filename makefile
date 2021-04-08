all: clean TestC

build: TestC

TestC: TestC.o
	gcc -o TestC TestC.o

TestC.o: TestC.c
	gcc -c TestC.c -Wall -O

clean:
	rm -fr TestC.o TestC