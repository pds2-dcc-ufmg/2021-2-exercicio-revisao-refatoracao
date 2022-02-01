#include <iostream>
#include <string>
#include "Cliente.hpp"

CLiente::Cliente (std::string nome, std::endereco, std::string cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cep = cep;
}

void Cliente::print (){
	std::cout << "[Cliente]" << endl
         << "  Nome: " <<_nome << endl
		 << "  Endereco: " <<_endereco << endl
		 << "  CEP: " <<_cep << endl;
}

