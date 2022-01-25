CC=g++
CFLAGS=-std=c++11 -Wall

BUILD_DIR	= ./build
INCLUDE_DIR		=./include
ENTIDADES_DIR		=./src/entidades
SCR_DIR		= ./src



all: main

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${ENTIDADES_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${ENTIDADES_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Especialista.o: ${INCLUDE_DIR}/Especialista.hpp ${ENTIDADES_DIR}/Especialista.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${ENTIDADES_DIR}/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/Funcionario.hpp ${ENTIDADES_DIR}/Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${ENTIDADES_DIR}/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Gerente.o: ${INCLUDE_DIR}/Gerente.hpp ${ENTIDADES_DIR}/Gerente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${ENTIDADES_DIR}/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Venda.o: ${INCLUDE_DIR}/Venda.hpp ${ENTIDADES_DIR}/Venda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${ENTIDADES_DIR}/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/main.o: ./src/main.cpp ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Especialista.hpp ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Gerente.hpp ${INCLUDE_DIR}/Venda.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SCR_DIR}/main.cpp -o ${BUILD_DIR}/main.o

main: ${BUILD_DIR}/main.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o
	${CC} ${CFLAGS} -o main ${BUILD_DIR}/main.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o


clean:
		rm -f $ {BUILD_DIR}/*.o