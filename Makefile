CXX = g++
CFLAGS = -std=c++17 -Wall
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all: vpl_execution

vpl_execution: $(OBJS)
	$(CXX) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CFLAGS) -I$(INCLUDE_DIR) -c -o $@ $<

clean:
	rm -f $(OBJ_DIR)/*.o vpl_execution
