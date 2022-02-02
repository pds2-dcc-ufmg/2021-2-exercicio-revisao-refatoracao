#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(std::string nome)
{
	this->_nome = nome;
}

std::string Cliente::getNome()
{
	return this->_nome;
}

void Cliente::setEndereco(std::string endereco)
{
	this->_endereco = endereco;
}

std::string Cliente::getEndereco()
{
	return this->_endereco;
}

void Cliente::setCep(std::string cep)
{
	this->_cep = cep;
}

std::string Cliente::getCep()
{
	return this->_cep;
}

void Cliente::print()
{
	std::cout << "[Cliente]" << std::endl
			  << "  Nome: " << _nome << std::endl
			  << "  Endereco: " << _endereco << std::endl
			  << "  CEP: " << _cep << std::endl;
}
