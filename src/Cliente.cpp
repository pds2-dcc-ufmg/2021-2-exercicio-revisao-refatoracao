#include "Cliente.hpp"

#include <iostream>
#include <string>

Cliente::Cliente(std::string nome, std::string endereco, std::string cep) {

	this->nome = nome;
	this->endereco = endereco;
	this->cep = cep;

}

void Cliente::setNome(std::string nome) {

	this->nome = nome;

}

void Cliente::setEndereco(std::string endereco) {

	this->endereco = endereco;

}

void Cliente::setCep(std::string cep) {

	this->cep = cep;

}

std::string Cliente::getNome() {

	return this->nome;

}

std::string Cliente::getEndereco() {

	return this->endereco;

}

std::string Cliente::getCep() {

	return this->cep;

}

void Cliente::print() {

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << this->nome << std::endl
		 << "  Endereco: " << this->endereco << std::endl
		 << "  CEP: " << this->cep << std::endl;

}

