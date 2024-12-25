registro: main.o registro.o studente.o
	gcc -g -o registro main.o registro.o studente.o

main.o: main.c studente.h registro.h
	gcc -g -c main.c

registro.o: registro.c registro.h studente.h
	gcc -g -c registro.c

studente.o:  studente.c studente.h
	gcc -g -c studente.c

clean:
	rm -f *.o



