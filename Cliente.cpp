#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << this->Nome << std::endl
		 << "  Endereco: " << this->Endereco << std::endl
		 << "  CEP: " << this->Cep << std::endl;

}

