#include "Cliente.hpp"

#include <iostream>
#include <string>

Cliente::Cliente(string nome, string endereco, string cep){
  this->endereco = endereco;
  this->nome = nome;
  this->cep = cep;
}


void Cliente::print(){
    cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		     << "  Endereco: " << endereco << endl
		     << "  CEP: " << cep << endl;
    }
