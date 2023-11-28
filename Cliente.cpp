#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl;
	std::cout<< "  Nome: " << _nome << endl;
	std::cout<< "  Endereco: " << _endereco << endl;
	std:::cout<< "  CEP: " << _cep << endl;

}

