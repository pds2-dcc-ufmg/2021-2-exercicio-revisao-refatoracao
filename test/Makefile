INCLUDE_DIR := ./include
BUILD_DIR   := ./build
SRC_DIR     := ./src

CXX      :=g++
CXXFLAGS :=-I ${INCLUDE_DIR} -std=c++11 -Wall
LDFLAGS  :=-std=c++11 -Wall
TARGET   :=a.exe

all: ./${TARGET}

./${TARGET}: ${BUILD_DIR}/main.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Especialista.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Gerente.o ${BUILD_DIR}/Venda.o
	${CXX} ${LDFLAGS} ${BUILD_DIR}/* -o ./${TARGET}

${BUILD_DIR}/%.o: ${SRC_DIR}/%.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

${BUILD_DIR}/%.o: ${SRC_DIR}/entidades/%.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	rm -f ./${TARGET} ./${BUILD_DIR}/*
