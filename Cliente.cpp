#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << Cliente::nome << std::endl
		 << "  Endereco: " << Cliente::endereco << std::endl
		 << "  CEP: " << Cliente::cep << std::endl;

}

