#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cep){

	this->_nome = nome;
	this->_endereco= endereco;
	this->_cep = cep;
}

void Cliente::setNome(std::string nome){
	this->_nome = nome;
}
void Cliente::setEndereco(std::string endereco){
	this->_endereco = endereco;
}
void Cliente::setCep(std::string cep){
	this->_cep = cep;
}

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << _nome<< std::endl
		 << "  Endereco: " << _endereco << std::endl
		 << "  CEP: " << _cep << std::endl;

}

std::string Cliente::getNome(){
	return this->_nome;
}
std::string Cliente::getEndereco(){
	return this->_endereco;
}
std::string Cliente::getCep(){
	return this->_cep;
}