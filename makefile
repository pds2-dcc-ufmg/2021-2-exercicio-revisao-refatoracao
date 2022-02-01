CC = g++
CFLAGS = -std=c++11 -Wall

SRC = src
INCLUDE = include
BUILD = build

TARGET = executavel

$(TARGET) : $(BUILD)/Fucionario.o $(BUILD)/Especialista.o $(BUILD)/Gerente.o $(BUILD)/Cliente.o $(BUILD)/Venda.o $(BUILD)/main.o
	$(CC) $(CFLAGS) -I $(INCLUDE)/ -o $@ $(BUILD)/*

$(BUILD)/Fucionario.o : $(SRC)/Funcionario.cpp $(INCLUDE)/Funcionario.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)/ -o $@ -c $<

$(BUILD)/Especialista.o : $(SRC)/Especialista.cpp $(INCLUDE)/Especialista.hpp $(INCLUDE)/Funcionario.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)/ -o $@ -c $<

$(BUILD)/Gerente.o : $(SRC)/Gerente.cpp $(INCLUDE)/Gerente.hpp $(INCLUDE)/Funcionario.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)/ -o $@ -c $<

$(BUILD)/Cliente.o : $(SRC)/Cliente.cpp $(INCLUDE)/Cliente.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)/ -o $@ -c $<

$(BUILD)/Venda.o : $(SRC)/Venda.cpp $(INCLUDE)/Venda.hpp $(INCLUDE)/Cliente.hpp $(INCLUDE)/Especialista.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE)/ -o $@ -c $<

$(BUILD)/main.o : $(SRC)/main.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE)/ -o $@ -c $<

clear :
	rm $(BUILD)/main.o $(BUILD)/* $(TARGET)