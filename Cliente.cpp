#include "Cliente.hpp"

#include <iostream>
#include <string>

void Cliente::print() {
    std::cout << "[Cliente]" << endl
              << "  Nome: " << NOME << endl
              << "  Endereco: " << endereco << endl
              << "  CEP: " << Cep << endl;
}
