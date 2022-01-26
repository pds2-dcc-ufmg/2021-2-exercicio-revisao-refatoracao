#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(std::string nome) { 
    this->nome = nome; 
}

void Cliente::setEndereco(std::string endereco) {
    this->endereco = endereco;
}

void Cliente::setCep(std::string cep) {
    this->cep = cep;
}

void Cliente::setAlturaPais(std::string alturaPais) {
    this->alturaPais = alturaPais;
}


void Cliente::print(){
	std::cout << "[Cliente]" << std::endl
    << "  Nome: " << this->nome << std::endl
	<< "  Endereco: " << this->endereco << std::endl
	<< "  CEP: " << this->cep << std::endl;
}

