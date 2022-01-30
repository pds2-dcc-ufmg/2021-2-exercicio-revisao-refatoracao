#include <iostream>
#include "Cliente.hpp"

Cliente::Cliente(){}

void Cliente::print(){
	cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;
}

Cliente::Cliente(string nome, string endereco, string cep){
	this->nome = nome;
	this->endereco = endereco;
	this->cep = cep;
}

void Cliente::setNome(string nome){
	this->nome = nome;
}

void Cliente::setEndereco(string endereco){
	this->endereco = endereco;
}

void Cliente::setCep(string cep){
	this->cep = cep;
}

string Cliente::getNome(){
	return this->nome;
}

string Cliente::getEndereco(){
	return this->endereco;
}

string Cliente::getCep(){
	return this->cep;
}

