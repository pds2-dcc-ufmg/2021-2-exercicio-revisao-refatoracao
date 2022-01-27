CC = g++
CFLAGS = -std=c++11 -Wall

TARGET = main
OBJ_FILES = build/main.o build/Cliente.o build/Especialista.o build/Funcionario.o build/Gerente.o build/Venda.o
INCLUDE_FILES = include/Cliente.hpp include/Especialista.hpp include/Funcionario.hpp include/Gerente.hpp include/Venda.hpp

OBJ_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

all : $(TARGET)

$(TARGET) : $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(INCLUDE_DIR)/%.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@