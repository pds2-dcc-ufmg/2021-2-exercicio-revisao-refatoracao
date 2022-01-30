#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

// Teste de commit (vou remover isso depois)
