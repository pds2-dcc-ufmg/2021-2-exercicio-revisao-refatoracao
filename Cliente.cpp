#include "Cliente.hpp"
#include <iostream>
#include <string>

void Cliente::print() {
  std::cout << "[Cliente]" << std::endl
            << "  Nome: " << _nome << std::endl
            << "  Endereco: " << _endereco << std::endl
            << "  CEP: " << _cep << std::endl;
}
