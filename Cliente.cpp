#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

Cliente::Cliente(string NOME, string endereco, string Cep)
{
    this->NOME = NOME;
    this->endereco = endereco;
    this->Cep = Cep;
}
