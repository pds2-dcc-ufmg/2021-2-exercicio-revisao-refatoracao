#include <iostream>
#include <string>
#include "Cliente.hpp"

void setEndereco(std::string novoEndereco){
	nome = novoNome;
}

void setCep(int novoCep){
	cep = novoCep;
}

void Cliente::imprimeDados() override {
	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;
}