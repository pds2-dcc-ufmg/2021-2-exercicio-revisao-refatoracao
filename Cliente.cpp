
#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cep){
	this->set_nome(nome);
	this->set_endereco(endereco);
	this->set_cep(cep);
}

void Cliente::set_nome(std::string nome){
	this->nome = nome;
}

std::string Cliente::get_nome(){
	return this->nome;
}

void Cliente::set_endereco(std::string endereco){
	this->endereco = endereco;
}

std::string Cliente::get_endereco(){
	return this->endereco;
}

void Cliente::set_cep(std::string cep){
	this->cep = cep;
}

std::string Cliente::get_cep(){
	return this->cep;
}

void Cliente::print(){
	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << this->get_nome() << std::endl
		 << "  Endereco: " << this->get_endereco() << std::endl
		 << "  CEP: " << this->get_cep() << std::endl;
}


