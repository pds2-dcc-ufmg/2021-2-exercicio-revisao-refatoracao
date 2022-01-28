#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string NOME, std::string endereco, std::string Cep, std::string AlturaDosPais) {
	this->NOME = NOME;
	this->endereco = endereco;
	this->Cep = Cep;
	this->AlturaDosPais = AlturaDosPais;
}

void Cliente::print()
{
	std::cout << "[Cliente]" << std::endl
			  << "  Nome: " << this->NOME << std::endl
			  << "  Endereco: " << this->endereco << std::endl
			  << "  CEP: " << this->Cep << std::endl;
}