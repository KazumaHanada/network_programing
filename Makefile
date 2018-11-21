MyEth:main.o param.o
	cc -Wall -g -o MyEth main.o param.o

main.o:
	cc -Wall -g -c -o main.o main.c
	
param.o:
	cc -Wall -g -c -o param.o param.c