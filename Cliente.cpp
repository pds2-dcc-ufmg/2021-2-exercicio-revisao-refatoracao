#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::setNome(string nome)
{
	this->_nome = nome;
}

string Cliente::getNome()
{
	return _nome;
}

void Cliente::setEndereco(string endereco)
{
	this->_endereco = endereco;
}

string Cliente::getEndereco()
{
	return _endereco;
}

void Cliente::setCep(string cep)
{
	this->_cep = cep;
}

string Cliente::getCep()
{
	return _cep;
}

void Cliente::print()
{
	cout << "[Cliente]" << endl
			  << "  Nome: " << _nome << endl
			  << "  Endereco: " << _endereco << endl
			  << "  CEP: " << _cep << endl;
}
