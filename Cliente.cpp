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
	return nome;
}
void Cliente::setNome(string nomeNovo){
	this->nome = nomeNovo;
}


string Cliente::getEndereco(){ 
	return endereco;
}
void Cliente::setEndereco(string enderecoNovo){
	this->endereco = enderecoNovo;
}


string Cliente::getCep(){ 
	return cep;
}
void Cliente::setCep(string cepNovo){
	this->cep = cepNovo;
}
