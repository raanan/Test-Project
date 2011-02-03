all: main.o
	gcc -g -Wall main.o -o lab2

main.o: driver.c
	gcc -g -Wall -c driver.c -o main.o

clean:
	rm *.o lab2
