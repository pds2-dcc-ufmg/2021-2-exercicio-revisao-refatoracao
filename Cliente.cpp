#include <iostream>
#include <string>
#include "Cliente.hpp"


 Cliente::Cliente(std::string nome, std::string endereco, std::string cep)
 : _nome(nome), _endereco(endereco), _cep(cep)
 {}

Cliente::Cliente(std::string nome)
:_nome(nome)
{}


void Cliente::print() const{

std::cout << "[Cliente]" << std::endl;
std::cout << "  Nome: " << this->_nome << std::endl;
std::cout << "  Endereco: " << this->_endereco << std::endl;
std::cout << "  CEP: " << this->_cep << std::endl;
	

}

