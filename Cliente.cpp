#include <iostream>
#include <string>
#include "Cliente.hpp"


/*
Foram definidas as funções get() const para o acesso das variáveis corretas.
Foi arrumada a indentação 
*/

string Cliente::getNome() const {
  return this->NOME;
}

string Cliente::getEndereco() const {
  return this->endereco;
}

string Cliente::getCep() const {
  return this->Cep;
}

void Cliente::print(){
	std::cout << "[Cliente]" << endl
    << "  Nome: " << this->getNome() << endl
    << "  Endereco: " << this->getEndereco() << endl
    << "  CEP: " << this->getCep() << endl;
}

