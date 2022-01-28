CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR    = ./build
SRC_DIR    = ./src
INCLUDE_DIR  = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Venda.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Especialista.o: ${INCLUDE_DIR}/Especialista.hpp ${SRC_DIR}/Especialista.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Especialista.cpp -o ${BUILD_DIR}/Especialista.o

${BUILD_DIR}/Gerente.o: ${INCLUDE_DIR}/Gerente.hpp ${SRC_DIR}/Gerente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Gerente.cpp -o ${BUILD_DIR}/Gerente.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Venda.o: ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/Venda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Venda.cpp -o ${BUILD_DIR}/Venda.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Especialista.hpp ${INCLUDE_DIR}/Gerente.hpp ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Venda.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 
