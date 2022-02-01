#include <iostream>
#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

string Cliente::getNome()
{
	return this->nome;
}
string Cliente::getEndereco()
{
	return this->endereco;
}
string Cliente::getCep()
{
	return this->cep;
}

void Cliente::print()
{

	std::cout << "[Cliente]" << endl
			  << "  Nome: " << this->getNome() << endl
			  << "  Endereco: " << this->getEndereco() << endl
			  << "  CEP: " << this->getCep() << endl;
}

