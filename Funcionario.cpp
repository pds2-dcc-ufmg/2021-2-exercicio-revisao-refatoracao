#include "Funcionario.hpp"
#include <iostream>
#include <string>

void Funcionario::print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout  << "  Nome: " << nome <<std:: endl
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  RGFunc: " << rgfunc << std::endl;
}