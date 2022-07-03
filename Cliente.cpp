#include "Cliente.hpp"
#include <iostream>
#include <string>

void Cliente::print() {
  cout << "[Cliente]" << endl
       << "  Nome: " << nome << endl
       << "  Endereco: " << endereco << endl
       << "  CEP: " << cep << endl;
}
