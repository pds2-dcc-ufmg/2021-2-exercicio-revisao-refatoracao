#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " << _nome << endl
		 << "  Endereco: " << _endereco << endl
		 << "  CEP: " << _cep << endl;
}