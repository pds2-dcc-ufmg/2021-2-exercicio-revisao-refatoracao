#include <iostream>
#include <string>

#include "Cliente.hpp"

Cliente::Cliente(){}

Cliente::Cliente(std::string nome, std::string endereco, int cep){

	this->Nome = nome;
	this->Endereco = endereco;
	this->Cep = cep;

}

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl;
        std::cout << "  Nome: " << this->Nome << std::endl;
	std::cout << "  Endereco: " << this->Endereco << std::endl;
	std::cout << "  CEP: " << this->Cep << std::endl;

}

void Cliente::setNome(std::string novoNome){

	this->Nome = novoNome;

}

std::string Cliente::getNome(){

	return this->Nome;

}

void Cliente::setEndereco(std::string novoEndereco){

	this->Endereco = novoEndereco;

}

std::string Cliente::getEndereco(){

	return this->Endereco;

}

void Cliente::setCep(int novoCep){

	this->Cep = novoCep;

}

int Cliente::getCep(){

	return this->Cep;

}
