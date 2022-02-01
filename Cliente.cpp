#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

	std::cout << "[Cliente]" << endl << "  Nome: " << Nome << endl  << "  Endereco: " << Endereco << endl << "  CEP: " << Cep << endl;
}


Cliente::Cliente(string nome,string endereco,string cep){
  this->Nome=nome;
  this->Endereco=endereco;
  this->Cep=cep;
}
