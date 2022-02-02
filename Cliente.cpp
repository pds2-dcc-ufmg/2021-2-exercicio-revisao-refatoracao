#include <iostream>
#include <string>

#include "Cliente.hpp"

Cliente::Cliente(){}

Cliente::Cliente(std::string nome, std::string endereco, std::string cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cep = cep;
} 


std::string Cliente::getNome(){
	return this->_nome;
}

std::string Cliente::getCep(){
	return this->_cep;
}

std::string Cliente::getEndereco(){
	return this->_endereco;
}


void Cliente::print(){
	std::cout << "[Cliente]" << endl
         	 << "  Nome: " << this->getNome() << endl
		 << "  Endereco: " << this->getEndereco() << endl
		 << "  CEP: " << this->getCep() << endl;
}
