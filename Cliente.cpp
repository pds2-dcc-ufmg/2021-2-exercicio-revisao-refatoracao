#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome_ << endl
		 << "  Endereco: " << endereco_ << endl
		 << "  CEP: " << cep_ << endl;

}

