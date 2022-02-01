#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;
}

string Cliente::getNomeCliente(){
	return nome;
}

string Cliente::getEndereco(){
	return endereco;
}

string Cliente::getCEP(){
	return cep;
}

void Cliente::setNomeCliente(string _nome){
	this->nome = _nome;
}

void Cliente::setEndereco(string _endereco){
	this->endereco = _endereco;
}

void Cliente::setCEP(string _cep){
	this->cep = _cep;
}



