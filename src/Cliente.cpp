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
	std::cout << "  Nome: " << this->nome << std::endl;
	std::cout << "  Endereco: " << this->endereco << std::endl;
	std::cout << "  CEP: " << this->CEP << std::endl;
}
