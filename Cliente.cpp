#include <iostream>
#include "Cliente.hpp"

void Cliente::print() {
	std::cout << "[Cliente]" 				<< std::endl;
	std::cout << "  Nome: " 	<< nome 	<< std::endl;
	std::cout << "  Endereco: " << endereco << std::endl;
	std::cout << "  CEP: " 		<< cep 		<< std::endl;
}

void Cliente::setNome(std::string nome){
	this->nome = nome;
}

void Cliente::setEndereco(std::string endereco){
	this->endereco = endereco;
}

void Cliente::setCep(std::string cep){
	this->cep = cep;
}

std::string Cliente::getNome(){
	return this->nome;
}

std::string Cliente::getEndereco(){
	return this->endereco;
}

std::string Cliente::getCep(){
	return this->cep;
}

