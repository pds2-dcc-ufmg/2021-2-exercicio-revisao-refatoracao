#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << endl
        	  << "  Nome: " << nome << endl
		  << "  Endereco: " << endereco << endl
		  << "  CEP: " << cep << endl;
}


string Cliente::getNome(){ 
	return this->nome;
}
void Cliente::setNome(string nomeNovo){
	this->nome = nomeNovo;
}


string Cliente::getEndereco(){ 
	return this->endereco;
}
void Cliente::setEndereco(string enderecoNovo){
	this->endereco = enderecoNovo;
}


string Cliente::getCep(){ 
	return this->cep;
}
void Cliente::setCep(string cepNovo){
	this->cep = cepNovo;
}
