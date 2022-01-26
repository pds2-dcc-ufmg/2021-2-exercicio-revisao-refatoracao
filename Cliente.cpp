#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << NOME << std::endl
		 << "  Endereco: " << endereco << std::endl
		 << "  CEP: " << Cep << std::endl;

}

