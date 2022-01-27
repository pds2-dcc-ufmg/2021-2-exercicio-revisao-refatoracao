#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cep = cep;
}

void Cliente::imprime_dados(){
  std::cout << "[Cliente]" << std::endl
        << "  Nome: " << _nome << std::endl
		<< "  Endereco: " << _endereco << std::endl
		<< "  CEP: " << _cep << std::endl;
}

