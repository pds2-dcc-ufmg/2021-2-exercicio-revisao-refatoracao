CPP    = g++ 
CFLAGS = -std=c++11 -Wall
TARGET = main

INCLUDE_DIR = ./includes
BUILD_DIR   = ./bin/build
SRC_DIR     = ./src
BIN_DIR     = ./bin

${BIN_DIR}/${TARGET} : ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Venda.o ${BUILD_DIR}/main.o
	${CPP} ${CFLAGS} -I ${INCLUDE_DIR} -o ${BIN_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Funcionario.o : ${SRC_DIR}/funcionarios/Funcionario.cpp ${INCLUDE_DIR}//Funcionario.hpp
	${CPP} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/funcionarios/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Especialista.o : ${SRC_DIR}/funcionarios/Especialista.cpp ${INCLUDE_DIR}//Especialista.hpp
	${CPP} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/funcionarios/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Gerente.o : ${SRC_DIR}/funcionarios/Gerente.cpp ${INCLUDE_DIR}//Gerente.hpp
	${CPP} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/funcionarios/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Cliente.o : ${SRC_DIR}/Cliente.cpp ${INCLUDE_DIR}/Cliente.hpp
	${CPP} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Venda.o : ${SRC_DIR}/Venda.cpp ${INCLUDE_DIR}/Venda.hpp
	${CPP} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/main.o : ${SRC_DIR}/main.cpp
	${CPP} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o
