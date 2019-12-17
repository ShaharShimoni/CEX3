CC=gcc
AR=ar
OBJECTS_MAIN=mainfunction.c
OBJECTS_MAIN2=mainsort.c
FLAGS= -Wall -g


all:isort txtfind

txtfind:mainfunction.o function.o
	$(CC) $(FLAGS) -o txtfind mainfunction.o function.o 

isort:mainsort.o function.o
	$(CC) $(FLAGS) -o isort $(OBJECTS_MAIN2) function.c 

mainsort.o:mainsort.c function.h
	$(CC) $(FLAGS) -fPIC -c $(OBJECTS_MAIN2)

function.o:function.c function.h
	$(CC) $(FLAGS) -fPIC -c function.c


mainfunction.o:$(OBJECTS_MAIN) function.h
	$(CC) $(FLAGS) -fPIC -c $(OBJECTS_MAIN)

.PHONY:clean all

clean:
	rm -f *.o *.a all isort txtfind
