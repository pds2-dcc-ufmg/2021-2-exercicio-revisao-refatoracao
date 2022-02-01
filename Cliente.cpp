#include <iostream>
#include "Cliente.hpp"

std::string Cliente::getNome(){
	return this->_nome;
}

std::string Cliente::getEndereco(){
	return this->_endereco;
}

std::string Cliente::getCep(){
	return this->_cep;
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

void Cliente::imprimeDadosCliente(){

	std::cout << "[Cliente]" << std::endl
         	  << "  Nome: " << getNome() << std::endl
		  << "  Endereco: " << getEndereco() << std::endl
		  << "  CEP: " << getCep() << std::endl << std::endl;

}
