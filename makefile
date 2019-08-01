#
CFLAGS      = -c -g
#
LOAD        = ./file_test01

$(LOAD):    ftest_01.o ftest_sub.o
		cc -o $(LOAD) ftest_01.o ftest_sub.o

ftest_01.o: ftest_01.c
	gcc -c ftest_01.c

ftest_sub.o: ftest_sub.c
	gcc -c ftest_sub.c
