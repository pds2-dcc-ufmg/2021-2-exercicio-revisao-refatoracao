CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=main

BUILD_DIR=./build
INCLUDE_DIR=./include
SRC_DIR=./src

$(TARGET): $(BUILD_DIR)/main.o $(BUILD_DIR)/Animal.o $(BUILD_DIR)/Herpestidae.o $(BUILD_DIR)/Ursidae.o $(BUILD_DIR)/Alimentacao.o  $(BUILD_DIR)/Cuidador.o 
	$(CC) $(CFLAGS) $(BUILD_DIR)/*.o -o $(TARGET)

$(BUILD_DIR)/Alimentacao.o: $(INCLUDE_DIR)/Alimentacao.hpp $(SRC_DIR)/entidades/Alimentacao.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/entidades/Alimentacao.cpp -o $(BUILD_DIR)/Alimentacao.o

$(BUILD_DIR)/Animal.o: $(INCLUDE_DIR)/Animal.hpp $(SRC_DIR)/entidades/Animal.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/entidades/Animal.cpp -o $(BUILD_DIR)/Animal.o

$(BUILD_DIR)/Cuidador.o: $(INCLUDE_DIR)/Cuidador.hpp $(SRC_DIR)/entidades/Cuidador.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/entidades/Cuidador.cpp -o $(BUILD_DIR)/Cuidador.o

$(BUILD_DIR)/Herpestidae.o: $(INCLUDE_DIR)/Herpestidae.hpp $(SRC_DIR)/entidades/Herpestidae.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/entidades/Herpestidae.cpp -o $(BUILD_DIR)/Herpestidae.o

$(BUILD_DIR)/Ursidae.o: $(INCLUDE_DIR)/Ursidae.hpp $(SRC_DIR)/entidades/Ursidae.cpp
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR)/ -c $(SRC_DIR)/entidades/Ursidae.cpp -o $(BUILD_DIR)/Ursidae.o

$(BUILD_DIR)/main.o: $(BUILD_DIR)/Animal.o $(BUILD_DIR)/Herpestidae.o $(BUILD_DIR)/Ursidae.o $(BUILD_DIR)/Alimentacao.o  $(BUILD_DIR)/Cuidador.o $(SRC_DIR)/main.cpp
	$(CC) $(CFLAGS) -I $(SRC_DIR)/$(INCLUDE_DIR)/ -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

clean:
	rm -f $(BUILD_DIR)/* 