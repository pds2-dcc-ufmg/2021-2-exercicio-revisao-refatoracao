CC = g++
FLAGS = -Wall

all = main

SRC_DIR = ./src
HDR_DIR = ./include
BUILD_DIR = ./build


main: ${BUILD_DIR}/main.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o
	${CC} ${FLAGS} $^ -o $@

${BUILD_DIR}/main.o : ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o
	${CC} ${FLAGS} -I ${HDR_DIR}/ -c main.cpp -o $@

${BUILD_DIR}/Cliente.o: ${SRC_DIR}/Cliente.cpp ${HDR_DIR}/Cliente.hpp
	${CC} ${FLAGS} -I ${HDR_DIR}/ -c ${SRC_DIR}/Cliente.cpp -o $@

${BUILD_DIR}/Funcionario.o: ${SRC_DIR}/Funcionario.cpp ${HDR_DIR}/Funcionario.hpp
	${CC} ${FLAGS} -I ${HDR_DIR}/ -c ${SRC_DIR}/Funcionario.cpp -o $@

${BUILD_DIR}/Especialista.o:  ${SRC_DIR}/Especialista.cpp ${HDR_DIR}/Especialista.hpp
	${CC} ${FLAGS} -I ${HDR_DIR}/ -c ${SRC_DIR}/Especialista.cpp  -o $@

${BUILD_DIR}/Gerente.o: ${SRC_DIR}/Gerente.cpp ${HDR_DIR}/Gerente.hpp
	${CC} ${FLAGS} -I ${HDR_DIR}/ -c ${SRC_DIR}/Gerente.cpp -o $@

${BUILD_DIR}/Venda.o:  ${SRC_DIR}/Venda.cpp ${HDR_DIR}/Venda.hpp
	${CC} ${FLAGS} -I ${HDR_DIR}/ -c ${SRC_DIR}/Venda.cpp -o $@