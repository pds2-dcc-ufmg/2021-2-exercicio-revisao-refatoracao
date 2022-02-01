#include "Cliente.hpp"

void Cliente::imprimeDados()
{
	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << nome << std::endl
		 << "  Endereco: " << endereco << std::endl
		 << "  CEP: " << CEP << std::endl;
}

std::string Cliente::getNome()
{
	return this->nome;
}

Cliente::Cliente()
{}

Cliente::Cliente(std::string nome, std::string endereco, std::string CEP) : 
					nome(nome), endereco(endereco), CEP(CEP) 
{}


