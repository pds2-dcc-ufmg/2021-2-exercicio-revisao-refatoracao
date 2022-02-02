#include "Funcionario.hpp"
#include <iostream>

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl
              << "  Idade: " << idade << std::endl
              << "  RGFunc: " << rg_func << std::endl;
}