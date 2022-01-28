#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Cliente.hpp"

Cliente::Cliente(string _nome, string _endereco, string _cep) {
	this->nome = _nome;
	this->endereco = _endereco;
	this->Cep = _cep;
}

void Cliente::print() const{

	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

