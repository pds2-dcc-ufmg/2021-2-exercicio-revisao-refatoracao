#include <iostream>
#include <string>

#include "Cliente.hpp"

Cliente::Cliente(){}

Cliente::Cliente(std::string nome, std::string endereco, std::string cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cep = cep;
} 


std::string Cliente::auxNome(){
	return this->_nome;
}

std::string Cliente::auxCep(){
	return this->_cep;
}

std::string Cliente::auxEndereco(){
	return this->_endereco;
}


void Cliente::print(){
	std::cout << "[Cliente]" << endl
         	 << "  Nome: " << this->auxNome() << endl
		 << "  Endereco: " << this->auxEndereco() << endl
		 << "  CEP: " << this->auxCep() << endl;
}
