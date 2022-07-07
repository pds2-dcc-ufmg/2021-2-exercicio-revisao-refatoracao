#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << std::endl;
	std::cout << "  Nome: " << nome << std::endl;
	std::cout << "  Endereco: " << endereco << std::endl;
	std::cout << "  CEP: " << cep << std::endl;
}