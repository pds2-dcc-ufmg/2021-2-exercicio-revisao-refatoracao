#include <iostream>
#include <string>

#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cep)
{
	this->nome = nome;
	this->endereco = endereco;
	this->cep = cep;
}

void Cliente::print()
{
	std::cout << "[Cliente]" << std::endl
			  << "Nome: " << nome << std::endl
			  << "Endereco: " << endereco << std::endl
			  << "CEP: " << cep << std::endl;
}
