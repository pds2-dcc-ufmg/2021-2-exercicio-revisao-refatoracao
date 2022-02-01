#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}


string Cliente::getNOME(){ return NOME;}

void Cliente::setNOME(string NOME_NOVO)
{
	this->NOME = NOME_NOVO;
}


