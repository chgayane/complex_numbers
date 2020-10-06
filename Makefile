all: main

main: main.o sort.o
      	g++ main.o sort.o -o main

main.o: main.c
       	g++ -c main.c -o main.o

sort.o: sort.c
        g++ -c sort.c -o sort.o

clean:
	rm *.o main

