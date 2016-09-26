OPTS = -g -c -Wall -Werror
all: Roommate clean
Resistor: Roommate.o
	gcc -o Roommate Roommate.o
Roommate.o: roommate.c
	gcc $(OPTS) roommate.c
clean: 
	rm -f *.o *~