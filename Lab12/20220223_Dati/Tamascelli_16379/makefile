
main.o: main.C lib.h
	g++ -c main.C

lib.o: lib.C lib.h
	g++ -c lib.C

main.x: main.o lib.o
	g++ main.o lib.o -o main.x

compila: main.x

esegui: main.x
	./main.x