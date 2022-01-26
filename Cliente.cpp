#include <iostream>
#include <string>
#include "Cliente.hpp"

string Cliente::getNOME(){
	return this->NOME; 
}

void Cliente::setNOME(string nome){
	this->NOME = nome; 
}

string Cliente::getEndereco(){
	return this->endereco; 
}

void Cliente::setEndereco(string endereco){
	this->endereco = endereco; 
}

string Cliente::getCep(){
	return this->Cep; 
}

void Cliente::setCep(string cep){
	this->Cep = cep; 
}

string Cliente::getAlturaDosPais(){
	return this->AlturaDosPais; 
}

void Cliente::setAlturaDosPais(string AlturaDosPais){
	this->AlturaDosPais = AlturaDosPais; 
}

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << this->getNOME() << endl
		 << "  Endereco: " << this->getEndereco() << endl
		 << "  CEP: " << this->getCep() << endl;

}

