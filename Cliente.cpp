#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string Nome, std::string Endereco, std::string CEP) {
	this->Nome = Nome;
	this->Endereco = Endereco;
	this->CEP = CEP;
}

void Cliente::Print(){
	std::cout << "[Cliente]" << std::endl
        << "  Nome: " << Nome << std::endl
		<< "  Endereco: " << Endereco << std::endl
		<< "  CEP: " << CEP << std::endl;
}
