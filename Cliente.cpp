#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(std::string nome){
	this->nome = nome;
}

std::string Cliente::getNome(){
	return this->nome;
}

void Cliente::setEndereco(std::string endereco){
	this->endereco = endereco;
}

std::string Cliente::getEndereco(){
	return this->endereco;
}

void Cliente::setCep(std::string cep){
	this->cep = cep;
}

std::string Cliente::getCep(){
	return this->cep;
}

void Cliente::print_cliente(){

	std::cout << "[Cliente]" << std:: endl << "  Nome: " << nome << std:: endl 
	<< "  Endereco: " << endereco << std:: endl << "  CEP: " << cep << std::endl;
}
