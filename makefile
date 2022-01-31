CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=./build/executable

BUILD_DIR=./build
SRC_DIR=./src
INCLUDE_DIR=./include

${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Venda.o: ${INCLUDE_DIR}/Venda.hpp ${INCLUDE_DIR}/Especialista.hpp ${SRC_DIR}/entities/Venda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entities/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/Gerente.o: ${INCLUDE_DIR}/Gerente.hpp ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entities/Gerente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entities/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Especialista.o: ${INCLUDE_DIR}/Especialista.hpp ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entities/Especialista.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entities/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entities/Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entities/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entities/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entities/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Especialista.hpp ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Gerente.hpp ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/* 
