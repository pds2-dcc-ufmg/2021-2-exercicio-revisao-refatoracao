#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print()
{
	cout
		<< "[Cliente]" << endl
		<< "  Nome: " << nome << endl
		<< "  Endereco: " << endereco << endl
		<< "  CEP: " << cep << endl;
}
