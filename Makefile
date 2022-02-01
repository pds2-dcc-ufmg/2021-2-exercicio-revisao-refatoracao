#variáveis auxiliares
CC = g++
CFLAGS = -std=c++11 -Wall
TARGET = vpl_exe#.exe

BUILD_DIR = ./build#.o cuidado com espaço
INCLUDE_DIR = ./include#.hpp
SRC_DIR = ./src#.cpp

${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o
	
#-I:include-paths for headers (.hpp)
${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entidades/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Especialista.o: ${INCLUDE_DIR}/Especialista.hpp ${SRC_DIR}/entidades/Especialista.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entidades/Funcionario.cpp 
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Gerente.o: ${INCLUDE_DIR}/Gerente.hpp ${SRC_DIR}/entidades/Gerente.cpp 
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Venda.o: ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/entidades/Venda.cpp 
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/entidades/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/*.hpp ${SRC_DIR}/main.cpp 
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

clean:
	rm -f ${BUILD_DIR}/*
#remover todos os arquivos(.o e .exe) dentro de build