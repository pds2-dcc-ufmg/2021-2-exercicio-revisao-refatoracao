OBJ = ./obj
INCLUDE = ./includes
SRC = ./src
BIN = ./bin
LIB = ./lib

FLAGS = -O3 


all: build run
	

build:
	g++ -c ./src/Cliente.cpp -I ./includes -o ./obj/Cliente.o
	g++ -c ./src/Especialista.cpp -I ./includes -o ./obj/Especialista.o
	g++ -c ./src/Venda.cpp -I ./includes -o ./obj/Venda.o
	g++ -c ./src/Funcionario.cpp -I ./includes -o ./obj/Funcionario.o
	g++ -c ./src/Gerente.cpp -I ./includes -o ./obj/Gerente.o
	g++ ./main.cpp ./obj/*.o -I ./includes -o ./bin/main


run: 
	./bin/main


clear: 
	rm  ./bin/* 
