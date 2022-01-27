#include <iostream>
#include <string>
#include "Cliente.hpp"

//Imprime as informações do cliente, na ordem nome, endereço e CEP.
void Cliente::print(){
	cout << "[Cliente]" << endl; 
	cout << "  Nome: " << NOME << endl;
	cout << "  Endereco: " << endereco << endl;
	cout << "  CEP: " << Cep << endl;
}

Cliente::Cliente(string NOME,
            string endereco,
            string Cep,
            string AlturaDosPais){
  this->NOME = NOME;
  this->endereco = endereco;
  this->Cep = Cep;
  this->AlturaDosPais = AlturaDosPais;
}
