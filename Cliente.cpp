#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

#/--get/set nome
string Cliente::getNOME(){ 
	return NOME;
}
void Cliente::setNOME(string NOME_NOVO){
	this->NOME = NOME_NOVO;
}
#---/


#/--get/set endereço
string Cliente::getENDERECO(){ 
	return endereco;
}
void Cliente::setENDERECO(string ENDERECO_NOVO){
	this->endereco = ENDERECO_NOVO;
}
#---/


#/--get/set cep
string Cliente::getCEP(){ 
	return Cep;
}
void Cliente::setCEP(string CEP_NOVO){
	this->Cep = CEP_NOVO;
}
#---/
