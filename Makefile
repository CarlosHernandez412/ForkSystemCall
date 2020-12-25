# CMPS 360 Week 01
# Makefile for code in /examples/week01

all:	alarm fork1 fork2 fork-wait perror fork3  fork4

alarm:	alarm.c
	gcc -o alarm alarm.c

fork1:	fork1.c
	gcc -o fork1 fork1.c

fork2:	fork2.c 
	gcc -o fork2 fork2.c

fork3:	fork3.c 
	gcc -o fork3 fork3.c

fork4:	fork4.c 
	gcc -o fork4 fork4.c

# demonstrates sending signals from to parent child and use of wait
fork-wait:	fork-wait.c 
	gcc -o fork-wait fork-wait.c

# demonstrates use of perror
perror:	perror.c 
	gcc -o perror perror.c

clean:  # start from scratch 
	rm -f *.o fork1 fork2 fork-wait perror fork3 alarm out log err fork4
