#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;

}

#/---get/set nome
string Cliente::getNome(){ 
	return nome;
}
void Cliente::setNome(string nomeNovo){
	this->nome = nomeNovo;
}
#---/


#/---get/set endereço
string Cliente::getEndereco(){ 
	return endereco;
}
void Cliente::setENDERECO(string enderecoNovo){
	this->endereco = enderecoNovo;
}
#---/


#/---get/set cep
string Cliente::getCep(){ 
	return cep;
}
void Cliente::setCep(string cepNovo){
	this->cep = cepNovo;
}
#---/
