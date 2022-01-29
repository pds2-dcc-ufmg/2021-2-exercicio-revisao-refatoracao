#include <iostream>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
	<< "  Nome: " << this->NOME << std::endl
	<< "  Endereco: " << this->endereco << std::endl
	<< "  CEP: " << this->Cep << std::endl;

}


