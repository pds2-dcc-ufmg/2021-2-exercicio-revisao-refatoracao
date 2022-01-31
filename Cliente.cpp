#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
              << "  Nome: " << this->nome << std::endl
              << "  Endereco: " << this->endereco << std::endl
              << "  CEP: " << this->cep << std::endl;

}
