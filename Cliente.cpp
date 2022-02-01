#include <iostream>
#include <string>
#include "Cliente.hpp"


Cliente::Cliente(string nome, string endereco, string cep){
	_nome = nome;
	_endereco = endereco;
	_cep = cep;
}


void Cliente::printDados() const{
	std::cout << "[Cliente]" << endl
         << "  Nome: " << _nome << endl
		 << "  Endereco: " << _endereco << endl
		 << "  CEP: " << _cep << endl;
}

