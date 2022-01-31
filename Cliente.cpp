#include <iostream>
#include <string>
#include "Cliente.hpp"

//Método de inicialiazação de classe direta
Cliente::Cliente(string _nome, string _endereco, string _Cep) {
	this->nome = _nome;
	this->endereco = _endereco;
	this->cep = _Cep;
}

// imprime na tela os dados de um cliente cadastrado
void Cliente::print(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;
}

