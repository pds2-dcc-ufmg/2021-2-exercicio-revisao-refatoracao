#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::imprimeInformacoes()
{
 std::cout
					<< "[Cliente]" << endl
					<< "  Nome: " << this->getNome() << endl
					<< "  Endereco: " << this->getEndereco() << endl
					<< "  CEP: " << this->getCep() << endl;
}

std::string Cliente::getNome()
{
 return this->nome;
}

std::string Cliente::getEndereco()
{
 return this->endereco;
}

std::string Cliente::getCep()
{
 return this->CEP;
}