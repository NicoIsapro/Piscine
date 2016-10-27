CC=gcc -Wall -I./

all: link distrib

build:
	$(CC) -c *.c
link: build
	ar rc libmy.a *.o
	ranlib libmy.a
distrib: distrib-lib distrib-header

distrib-lib:
	cp ./libmy.a ../
distrib-header:
	cp ./my.h ../../include
clean:
	rm -f *.o ./libmy.a
