#include "Cliente.hpp"

/*
Arquivo com as implementacoes dos metodos e funcoes da classe Cliente
*/

Cliente::Cliente(std::string nome, std::string endereco, std::string cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cep = cep;
}

std::string Cliente::getNome(){
	return this->_nome;
}

void Cliente::print(){
	std::cout << "[Cliente]" << std::endl;
    std::cout<< "  Nome: " <<this-> _nome << std::endl;
	std::cout<< "  Endereco: " <<this-> _endereco << std::endl;
	std::cout<< "  CEP: " <<this-> _cep << std::endl;
}