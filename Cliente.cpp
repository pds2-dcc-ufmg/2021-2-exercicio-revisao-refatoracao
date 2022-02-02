#include "Cliente.hpp"

Cliente::Cliente(string nome, string endereco, string cep){
	this->nome = nome;
	this->endereco = endereco;
	this->cep = cep;
};

void Cliente::printCliente(){

	cout << "[Cliente]" << endl
  << "  Nome: " << nome << endl
	<< "  Endereco: " << endereco << endl
	<< "  CEP: " << cep << endl;

};