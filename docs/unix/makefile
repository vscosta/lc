all: fac

hello: main.o fac.o
	gcc main.o fac.o hello.o -o fac

main.o: main.c
	gcc -c main.c

fac.o: fac.c
	gcc -c fac.c

clean:
	rm *.o fac
