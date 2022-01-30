#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print()
{
    std::cout << "[Funcionario]" << std::endl
              << "Idade: " << idade << std::endl
              << "RGFunc: " << rgFunc << std::endl;
}