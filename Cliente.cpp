#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}
Cliente::Cliente (std::string Nome, std::string Endereco, std::string cep, std::string alturadospais){
	this->NOME = Nome;
	this->endereco = Endereco;
	this->Cep = cep;
	this->AlturaDosPais = alturadospais;
}
