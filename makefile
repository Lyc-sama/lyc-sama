main.o:main.c
	gcc -Wall -g -lm -o main main.c
clean:
	rm -f main
do:
	./main