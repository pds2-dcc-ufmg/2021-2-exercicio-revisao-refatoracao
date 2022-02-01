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


string Cliente::getENDERECO(){ return endereco;}

void Cliente::setENDERECO(string ENDERECO_NOVO)
{
	this->endereco = ENDERECO_NOVO;
}


string Cliente::getCEP(){ return Cep;}

void Cliente::setCEP(string CEP_NOVO)
{
	this->Cep = CEP_NOVO;
}
