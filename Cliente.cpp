#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " << _NOME << endl
		 << "  Endereco: " << _endereco << endl
		 << "  CEP: " << _Cep << endl;
}
Cliente::Cliente(string nome,string endereco, string cep){
	_NOME = nome;
	_endereco = endereco;
	_Cep = cep;
}


