#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() {

	std::cout << "[Cliente]" << std::endl;
        std::cout << "  Nome: " << this->nome << std::endl;
	std::cout << "  Endereco: " << this->endereco << std::endl;
	std::cout << "  CEP: " << this->cep << std::endl;
}
