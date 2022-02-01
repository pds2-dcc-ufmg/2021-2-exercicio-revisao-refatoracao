#include <iostream>
#include <string>
#include "Cliente.hpp"

string Cliente::getNome()
{
	return nome;
}

void Cliente::imprimir()
{

	std::cout << "[Cliente]" << endl
			  << "  Nome: " << nome << endl
			  << "  Endereco: " << endereco << endl
			  << "  CEP: " << cep << endl;
}
