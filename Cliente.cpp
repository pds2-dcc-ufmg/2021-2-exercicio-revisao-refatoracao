#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, int cep)
{
	this->nome = nome;
	this->cep = cep;
	this->endereco = endereco;
}

void Cliente::print()
{

	std::cout << "[Cliente]" << std::endl
			  << "  Nome: " << nome << std::endl
			  << "  Endereco: " << endereco << std::endl
			  << "  CEP: " << cep << std::endl;
}
