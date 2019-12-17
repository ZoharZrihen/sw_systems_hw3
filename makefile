CC=gcc
AR=ar
FLAGS= -Wall -g

all: mysort isort myfind txtfind
txtfind: tmain.o myfind
	$(CC) $(FLAGS) -o txtfind tmain.o libmyFind.a
myfind: libmyFind.a
libmyFind.a: texter.o
	$(AR) -rcs libmyFind.a texter.o
texter.o: texter.c texter.h
	$(CC) $(FLAGS) -c texter.c
tmain.o: tmain.c texter.h
	$(CC) $(FLAGS) -c tmain.c -o tmain.o
isort: smain.o mysort
	$(CC) $(FLAGS) -o isort smain.o libmySort.a
mysort: libmySort.a
libmySort.a: fsort.o
	$(AR) -rcs libmySort.a fsort.o
fsort.o: fsort.c fsort.h
	$(CC) $(FLAGS) -c fsort.c
smain.o: smain.c fsort.h
	$(CC) $(FLAGS) -c smain.c -o smain.o

.PHONY: clean all mysort myfind

clean:
	rm -f *.o *.a *.so isort txtfind

