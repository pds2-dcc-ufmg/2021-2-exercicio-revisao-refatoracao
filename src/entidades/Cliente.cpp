#include "Cliente.hpp"

void Cliente::ImprimeDados() const
{

	std::cout << "[Cliente]" << std::endl
			  << "  Nome: " << this->getNome() << std::endl
			  << "  Endereco: " << this->Endereco << std::endl
			  << "  CEP: " << this->Cep << std::endl;
}

Cliente::Cliente(const std::string &Nome, std::string Endereco, std::string Cep)
{
	this->Nome = Nome;
	this->Endereco = Endereco;
	this->Cep = Cep;
}
