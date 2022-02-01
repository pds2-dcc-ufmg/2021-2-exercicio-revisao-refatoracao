#include <iostream>
#include <string>
#include "Cliente.hpp"

CLiente::Cliente (std::string nome, std::endereco, std::string cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cep = cep;
}

void Cliente::print (){
	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << _nome << std::endl
		 << "  Endereco: " << _endereco << std::endl
		 << "  CEP: " << _cep << std::endl;
}
