#include <iostream>
#include <string>
#include "Cliente.hpp"


Cliente::Cliente(string nome, string endereco, string cep, string alturadospais){
	this->NOME = nome;
	this->endereco = endereco;
	this->Cep = cep;
	this->AlturaDosPais = alturadospais;
}



void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

