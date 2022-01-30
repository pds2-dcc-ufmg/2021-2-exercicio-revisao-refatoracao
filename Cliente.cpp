#include <iostream>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << NOME << std::endl
         << "  Endereco: " << std::endereco << endl
         << "  CEP: " << Cep << std::endl;

}

