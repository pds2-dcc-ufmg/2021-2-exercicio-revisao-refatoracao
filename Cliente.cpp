#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
              << "  Nome: " << this->nome << std::endl
              << "  Endereco: " << this->endereco << std::endl
              << "  CEP: " << this->cep << std::endl;

}

Cliente::Cliente (std::string nome, std::string endereco, std::string cep) {
    this->nome = nome;
    this->endereco = endereco;
    this->cep = cep;
}

Cliente::~Cliente () {
    delete this;
}