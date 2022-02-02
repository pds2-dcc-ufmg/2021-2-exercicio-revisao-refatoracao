#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << _Nome << endl
		 << "  Endereco: " << _Endereco << endl
		 << "  CEP: " << Cep << endl;

}

