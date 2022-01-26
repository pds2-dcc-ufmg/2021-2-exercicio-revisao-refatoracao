#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

void Cliente::setNome(std::string nome){
	this->NOME = nome;
}

void Cliente::setEndereco(std::string endereco) {
	this->endereco = endereco;
}

void Cliente::setCep(std::string Cep) {
	this->Cep = Cep;
}
