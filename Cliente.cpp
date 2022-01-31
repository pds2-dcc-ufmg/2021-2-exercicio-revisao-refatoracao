#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::Cliente( string nome, string endereco, string cep){
	
	this->_nome = nome;
	
	this->_endereco = endereco;
	
	this->_cep = cep;
}

string Cliente:getNome(){

	return this->_nome;
}
