#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){}
Cliente::Cliente(string nome, string endereco, string CEP){
	this->nome = nome;
	this->CEP = CEP;
	this->endereco = endereco;
}

void Cliente::print() {
	cout << "[Cliente]"    << endl
         << "  Nome: " 	   << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: "	   << CEP << endl;
}