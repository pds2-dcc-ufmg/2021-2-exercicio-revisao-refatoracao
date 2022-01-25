#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string CEP) 
:	nome(nome), endereco(endereco), CEP(CEP)
{
}

std::string Cliente::getNome() {
	return this->nome;
}

void Cliente::print(){
	std::cout << "[Cliente]" << std::endl;
	std::cout << "\tNome: " << this->nome << std::endl;
	std::cout << "\tEndereco: " << this->endereco << std::endl;
	std::cout << "\tCEP: " << this->CEP << std::endl;
}
