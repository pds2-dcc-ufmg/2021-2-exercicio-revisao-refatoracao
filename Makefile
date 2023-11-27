CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=main

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

all: ${TARGET}

${TARGET}: ${BUILD_DIR}/main.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o
		${CC} ${FLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
		${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/Funcionario.cpp
		${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Especialista.o: ${INCLUDE_DIR}/Especialista.hpp ${SRC_DIR}/Especialista.cpp
		${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Gerente.o:	${INCLUDE_DIR}/Gerente.hpp ${SRC_DIR}/Gerente.cpp
		${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Venda.o: ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/Venda.cpp 
		${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/main.o: ${SRC_DIR}/main.cpp
		${CC} ${FLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o


clean:
		rm -f ${BUILD_DIR}/*
