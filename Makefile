default: prime

prime.o: prime.c
	gcc -c prime.c -o prime.o

prime: prime.o
	gcc prime.o -o prime

clean:
	-rm -f prime.o
	-rm -f prime

