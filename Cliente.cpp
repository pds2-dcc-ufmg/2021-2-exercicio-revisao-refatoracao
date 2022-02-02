#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
  cout << "[Cliente]" << endl
       << "  Nome: " << _nome << endl
       << "  Endereco: " << _endereco << endl
       << "  CEP: " << _cep << endl;
}

