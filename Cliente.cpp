#include <iostream>
#include "Cliente.hpp"

void Cliente::print() {
    std::cout << "[Cliente]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Endereco: " << endereco << std::endl
              << "  CEP: " << cep << std::endl;
}

