#include "Funcionario.hpp"
#include <iostream>
#include <string>

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade:  " << get_Idade() << std::endl
    << "  RGFunc: " << get_Rg() << std::endl;
}