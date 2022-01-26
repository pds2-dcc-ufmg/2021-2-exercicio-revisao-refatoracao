#include <iostream>
#include <string>
#include "Cliente.hpp"

string Cliente::getNome(){
	return this->nome; 
}

void Cliente::setNome(string nome){
	this->nome = nome; 
}

string Cliente::getEndereco(){
	return this->endereco; 
}

void Cliente::setEndereco(string endereco){
	this->endereco = endereco; 
}

int Cliente::getCep(){
	return this->Cep; 
}

void Cliente::setCep(int cep){
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
         << "  Nome: " << this->getNome() << endl
		 << "  Endereco: " << this->getEndereco() << endl
		 << "  CEP: " << this->getCep() << endl;

}

