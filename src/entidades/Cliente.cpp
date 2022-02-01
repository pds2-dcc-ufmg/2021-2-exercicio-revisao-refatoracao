#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << _nome << std::endl
		 << "  Endereco: " << _endereco << std::endl
		 << "  CEP: " << _cep << std::endl;
}
