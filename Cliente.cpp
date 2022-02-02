#include <iostream>
#include <string>

#include "Cliente.hpp"

Cliente::Cliente(std::string nome1, std::string endereco1, std::string cep1)
        : nome(nome1), endereco(endereco1), cep(cep1) { }

void Cliente::print()
{
	std::cout << "[Cliente]" << std::endl
			  << "Nome: " << nome << std::endl
			  << "Endereco: " << endereco << std::endl
			  << "CEP: " << cep << std::endl;
}
