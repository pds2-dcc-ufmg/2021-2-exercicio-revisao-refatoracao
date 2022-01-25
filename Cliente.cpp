#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl;
        std::cout << "  Nome: " << NOME << std::endl;
	std::cout << "  Endereco: " << endereco << std::endl;
	std::cout << "  CEP: " << Cep << std::endl;

}

