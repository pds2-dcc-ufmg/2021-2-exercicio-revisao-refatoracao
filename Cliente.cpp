#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::imprimeDados(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;
}