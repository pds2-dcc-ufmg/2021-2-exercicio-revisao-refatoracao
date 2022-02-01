#include <iostream>
#include <string>

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"


Cliente::Cliente(std::string Nome, std::string endereco, std::string cep):
		_nome(Nome),
		_endereco(endereco),
		_cep(cep)
{
}

std::string Cliente::getNome(){
	return _nome;
}

std::string Cliente::getEndereco(){
	return _endereco;
}

std::string Cliente::getCEP(){
	return _cep;
}

void Cliente::setNome(std::string nome){
	this->_nome = nome;
}

void Cliente::setEndereco(std::string Endereco){
	this->_endereco = Endereco;
}

void Cliente::setCEP(std::string cep){
	this->_cep = cep;
}

void Cliente::print(){
	std::cout << "[Cliente]" << std::endl
         	  << "  Nome: " << getNome() << std::endl
		 	  << "  Endereco: " << getEndereco() << std::endl
			  << "  CEP: " << getCEP() << std::endl;
}

