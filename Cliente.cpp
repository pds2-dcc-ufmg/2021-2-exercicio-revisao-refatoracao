#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print()
{
	std::cout << "[Cliente]" << std::endl
			  << "  Nome: " << this->_nome << std::endl
			  << "  Endereco: " << this->_endereco << std::endl
			  << "  CEP: " << this->_cep << std::endl;
}

void Cliente::set_nome(std::string nome)
{
	this->_nome = nome;
}
void Cliente::set_endereco(std::string endereco)
{
	this->_endereco = endereco;
}
void Cliente::set_cep(std::string cep)
{
	this->_cep = cep;
}
std::string Cliente::get_nome()
{
	return this->_nome;
}
std::string Cliente::get_endereco()
{
	return this->_endereco;
}
std::string Cliente::get_cep()
{
	return this->_cep;
}
