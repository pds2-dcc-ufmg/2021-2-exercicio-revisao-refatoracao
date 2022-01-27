CXX       := g++
CXX_FLAGS := -std=c++11 -Wall -g

TARGET 	= Relatorio

BUILD = ./build
SOURCE = ./src
INCLUDE = ./include

all: ${TARGET}

${BUILD}/Especialista.o: ${SOURCE}/Especialista.cpp ${INCLUDE}/Especialista.hpp ${INCLUDE}/Funcionario.hpp
	${CXX} ${CXX_FLAGS} -I ${INCLUDE} -c ${SOURCE}/Especialista.cpp -o ${BUILD}/Especialista.o

${BUILD}/Gerente.o: ${SOURCE}/Gerente.cpp ${INCLUDE}/Gerente.hpp ${INCLUDE}/Funcionario.hpp
	${CXX} ${CXX_FLAGS} -I ${INCLUDE} -c ${SOURCE}/Gerente.cpp -o ${BUILD}/Gerente.o

${BUILD}/Venda.o: ${SOURCE}/Venda.cpp ${INCLUDE}/Venda.hpp ${INCLUDE}/Especialista.hpp
	${CXX} ${CXX_FLAGS} -I ${INCLUDE} -c ${SOURCE}/Venda.cpp -o ${BUILD}/Venda.o

${BUILD}/Cliente.o: ${SOURCE}/Cliente.cpp ${INCLUDE}/Cliente.hpp
	${CXX} ${CXX_FLAGS} -I ${INCLUDE} -c ${SOURCE}/Cliente.cpp -o ${BUILD}/Cliente.o

${BUILD}/main.o: ${SOURCE}/main.cpp ${INCLUDE}/
	${CXX} ${CXX_FLAGS} -I ${INCLUDE} -c ${SOURCE}/main.cpp -o ${BUILD}/main.o

./${TARGET}: ${BUILD}/main.o ${BUILD}/Especialista.o ${BUILD}/Gerente.o ${BUILD}/Venda.o ${BUILD}/Cliente.o
	${CXX} ${CXX_FLAGS} -o ./${TARGET} ${BUILD}/*.o
