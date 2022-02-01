#include <iostream>
#include <string>
#include "../include/Cliente.hpp"

Cliente::Cliente(string _nome,string _endereco,string _cep)
				: nome(_nome), endereco(_endereco), cep(_cep){}

void Cliente::printDados(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;
}

string Cliente::getNome(){return nome;}
string Cliente::getEndereco(){return endereco;}
string Cliente::getCep(){return cep;}

void Cliente::setNome(string _nome){nome = _nome;}
void Cliente::setEndereco(string _endereco){endereco = _endereco;}
void Cliente::setCep(string _cep){cep = _cep;}