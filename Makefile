CC=g++
CFLAGS=-std=c++14 -Wall
TARGET=main

BUILD   	:= build
SRC     	:= src
ENTITIES    := entidades
INCLUDE 	:= include

${BUILD}/${TARGET}: ${BUILD}/Cliente.o ${BUILD}/Funcionario.o ${BUILD}/Especialista.o ${BUILD}/Gerente.o ${BUILD}/Venda.o ${BUILD}/main.o
	${CC} ${CFLAGS} -o ./${TARGET} ${BUILD}/*.o

${BUILD}/Cliente.o: ${INCLUDE}/Cliente.hpp ${SRC}/${ENTITIES}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE} -c ${SRC}/${ENTITIES}/Cliente.cpp -o ${BUILD}/Cliente.o

${BUILD}/Funcionario.o: ${INCLUDE}/Funcionario.hpp ${SRC}/${ENTITIES}/Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE} -c ${SRC}/${ENTITIES}/Funcionario.cpp -o ${BUILD}/Funcionario.o

${BUILD}/Especialista.o: ${INCLUDE}/Especialista.hpp ${SRC}/${ENTITIES}/Especialista.cpp
	${CC} ${CFLAGS} -I ${INCLUDE} -c ${SRC}/${ENTITIES}/Especialista.cpp -o ${BUILD}/Especialista.o

${BUILD}/Gerente.o: ${INCLUDE}/Gerente.hpp ${SRC}/${ENTITIES}/Gerente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE} -c ${SRC}/${ENTITIES}/Gerente.cpp -o ${BUILD}/Gerente.o

${BUILD}/Venda.o: ${INCLUDE}/Venda.hpp ${SRC}/${ENTITIES}/Venda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE} -c ${SRC}/${ENTITIES}/Venda.cpp -o ${BUILD}/Venda.o

${BUILD}/main.o: ${INCLUDE}/Cliente.hpp ${INCLUDE}/Funcionario.hpp ${INCLUDE}/Especialista.hpp ${INCLUDE}/Gerente.hpp ${INCLUDE}/Venda.hpp ${SRC}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE}/ -c ${SRC}/main.cpp -o ${BUILD}/main.o

clean:
	rm -f ${BUILD}/*