CC = g++
EXEC = main

${EXEC}: ./build/Cliente.o ./build/Pessoa.o ./build/Especialista.o ./build/Funcionario.o ./build/Gerente.o ./build/Venda.o ./build/main.o
	${CC} -o ${EXEC} ./build/*.o

./build/main.o: ./include/Funcionario.hpp ./include/Especialista.hpp ./include/Cliente.hpp ./include/Gerente.hpp ./include/Venda.hpp ./src/main.cpp
	${CC} -I ./include/ -c ./src/main.cpp -o ./build/main.o

./build/Pessoa.o: ./include/Pessoa.hpp ./src/Pessoa.cpp
	${CC} -I ./include/ -c ./src/Pessoa.cpp -o ./build/Pessoa.o
	
./build/Cliente.o: ./include/Pessoa.hpp ./include/Cliente.hpp ./src/Cliente.cpp
	${CC} -I ./include/ -c ./src/Cliente.cpp -o ./build/Cliente.o

./build/Funcionario.o: ./include/Pessoa.hpp ./include/Funcionario.hpp ./src/Funcionario.cpp
	${CC} -I ./include/ -c ./src/Funcionario.cpp -o ./build/Funcionario.o

./build/Gerente.o: ./include/Funcionario.hpp ./include/Gerente.hpp ./src/Gerente.cpp
	${CC} -I ./include/ -c ./src/Gerente.cpp -o ./build/Gerente.o

./build/Especialista.o: ./include/Cliente.hpp ./include/Especialista.hpp ./src/Especialista.cpp
	${CC} -I ./include/ -c ./src/Especialista.cpp -o ./build/Especialista.o

./build/Venda.o: ./include/Cliente.hpp ./include/Especialista.hpp ./include/Venda.hpp ./src/Venda.cpp
	${CC} -I ./include/ -c ./src/Venda.cpp -o ./build/Venda.o