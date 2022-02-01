CC = g++
CFLAGS = -std=c++0x -Wall
TARGET = programa
RM = rm -f

BUILD_DIR = ./build

all: vpl_execution

vpl_execution: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Venda.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o vpl_execution ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: Cliente.hpp Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c Cliente.cpp -o ${BUILD_DIR}/Cliente.o


${BUILD_DIR}/Venda.o: Venda.hpp Venda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c Venda.cpp -o ${BUILD_DIR}/Venda.o
	
${BUILD_DIR}/Funcionario.o: Funcionario.hpp Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o
	
${BUILD_DIR}/Gerente.o: Gerente.hpp Gerente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c Gerente.cpp -o ${BUILD_DIR}/Gerente.o
	
${BUILD_DIR}/Especialista.o: Especialista.hpp Especialista.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c Especialista.cpp -o ${BUILD_DIR}/Especialista.o
	
${BUILD_DIR}/main.o: main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c main.cpp -o ${BUILD_DIR}/main.o
	
clean: 
	RM *.o
	

