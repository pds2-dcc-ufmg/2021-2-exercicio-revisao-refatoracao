#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente :: Cliente(string _nome,string _endereco,string _cep){
	nome = _nome;
	endereco = _endereco;
	Cep = _cep;
	print();
}

Cliente :: Cliente (){};

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

