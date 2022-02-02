CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = vpl_execution

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS}	-o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entidades/Cliente.cpp
	${CC} ${CFLAGS}	-I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Especialista.o: ${INCLUDE_DIR}/Especialista.hpp ${SRC_DIR}/entidades/Especialista.cpp
	${CC} ${CFLAGS}	-I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entidades/Funcionario.cpp
	${CC} ${CFLAGS}	-I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Gerente.o: ${INCLUDE_DIR}/Gerente.hpp ${SRC_DIR}/entidades/Gerente.cpp
	${CC} ${CFLAGS}	-I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Venda.o: ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/entidades/Venda.cpp
	${CC} ${CFLAGS}	-I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Especialista.hpp ${INCLUDE_DIR}/Gerente.hpp ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS}	-I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o