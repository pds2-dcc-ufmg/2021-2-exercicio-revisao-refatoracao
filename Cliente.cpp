#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << endl;
        std::cout << "  Nome: " << this->nome << endl;
	std::cout << "  Endereco: " << this->endereco << endl;
	std::cout << "  CEP: " << this->cep << endl;
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
