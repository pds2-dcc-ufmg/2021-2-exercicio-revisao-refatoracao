#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;
}

void Cliente::setAlturaDosPais(string altura){
	this->AlturaDosPais = altura;
}

void Cliente::setNome(string nome){
	this->NOME = nome;
}

void Cliente::setEndereco(string endereco){
	this->endereco = endereco;
}

void Cliente::setCep(string cep){
	this->Cep = cep;
}
