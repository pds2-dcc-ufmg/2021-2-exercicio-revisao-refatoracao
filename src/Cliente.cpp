#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente::Cliente(std::string nome, std::string endereco, std::string cep){
	__nome = nome;
	__endereco = endereco;
	__Cep = cep;
}

void Cliente::Cliente::imprimeDados(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << __nome << std::endl
		 << "  Endereco: " << __endereco << std::endl
		 << "  CEP: " << __Cep << std::endl;

}

std::string Cliente::Cliente::getNome(){
	return __nome;
}

std::string Cliente::Cliente::getEndereco(){
	return __endereco;
}

std::string Cliente::Cliente::getCEP(){
	return __Cep;
}