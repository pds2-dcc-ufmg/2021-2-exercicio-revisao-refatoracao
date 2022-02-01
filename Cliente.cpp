#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::addCliente(string Nome,
						 string Endereco,
						 string Cep){
							 
	this->setNome(Nome);
	this->setEndereco(Endereco);
	this->setCep(Cep);
}

string Cliente::getNome(){
	return this->_Nome;
}

string Cliente::getEndereco(){
	return this->_Endereco;
}

string Cliente::getCep(){
	return this->_Cep;
}

void Cliente::setNome(string Nome){
	this->_Nome = Nome;
}

void Cliente::setEndereco(string Endereco){
	this->_Endereco = Endereco;
}

void Cliente::setCep(string Cep){
	this->_Cep = Cep;
}

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << this->getNome() << endl
		 << "  Endereco: " << this->getEndereco() << endl
		 << "  CEP: " << this->getCep() << endl;
}
