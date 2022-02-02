CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=main

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Pessoa.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o ${BUILD_DIR}/main.o
	${CC} ${FLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Pessoa.o: ${INCLUDE_DIR}/Pessoa.hpp ${SRC_DIR}/entidades/Pessoa.cpp
	${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Pessoa.cpp -o ${BUILD_DIR}/Pessoa.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entidades/Cliente.cpp
	${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Especialista.o: ${INCLUDE_DIR}/Especialista.hpp ${SRC_DIR}/entidades/Especialista.cpp
	${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entidades/Funcionario.cpp
	${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Gerente.o: ${INCLUDE_DIR}/Gerente.hpp ${SRC_DIR}/entidades/Gerente.cpp
	${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Venda.o: ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/entidades/Venda.cpp
	${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Pessoa.hpp ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Especialista.hpp ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Gerente.hpp ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/main.cpp
	${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*
