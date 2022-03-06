CC=gcc
EXENAME=ejemploInclusionLibs.bin

all: $(EXENAME)

$(EXENAME): principal.o operaciones.o
	$(CC) -o $(EXENAME) principal.o operaciones.o

principal.o: principal.c
	$(CC) -c principal.c -g

operaciones.o: operaciones.c
	$(CC) -c operaciones.c -g

clean:
	rm -f *.o *.bin
