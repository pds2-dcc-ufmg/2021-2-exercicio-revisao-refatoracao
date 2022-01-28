#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cep){  //Implementação do construtor

    this->_nome = nome;
    this->_endereco = endereco;
    this->_cep = cep;
}
void Cliente::print(){     

	std::cout << "[Cliente]" << std::endl   
            << "  Nome: " << this->_nome << std::endl
		    << "  Endereco: " << this->_endereco << std::endl
		    << "  CEP: " << this->_cep << std::endl;
}

std::string Cliente::getNome(){

    return this->_nome;
}