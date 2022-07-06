#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string NOME, std::string endereco, std::string Cep): NOME(NOME), endereco(endereco), Cep(Cep) {}

std::string Cliente::getNome() const {return NOME;}

void Cliente::print() {

	std::cout << "[Cliente]" << std::endl
        << "  Nome: " << NOME << std::endl
		<< "  Endereco: " << endereco << std::endl
		<< "  CEP: " << Cep << std::endl;
}