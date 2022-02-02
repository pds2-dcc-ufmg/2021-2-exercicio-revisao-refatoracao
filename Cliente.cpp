#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::printData(){
  std::cout << "[Cliente]" << endl
  << "  Nome: " << nome << endl
  << "  Endereço: " << endereco << endl
  << "  CEP: " << cep << endl;
}
