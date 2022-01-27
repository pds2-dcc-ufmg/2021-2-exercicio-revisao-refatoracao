#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}


string Cliente::getNome(){ return NOME;}

void Cliente::setNome(string newNome)
{
	this->NOME = newNome;
}

string Cliente::getEndereco(){ return endereco;}

void Cliente::setEndereco(string newEndereco)
{
	this->endereco = newEndereco;
}

int Cliente::getCep(){ return Cep;}

void Cliente::setCep(int newCep)
{
	this->Cep = newCep;
}
