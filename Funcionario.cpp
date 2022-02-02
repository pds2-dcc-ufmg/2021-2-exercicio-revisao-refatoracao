#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl << "  Idade: " << idade 
    << std::endl << "  RGFunc: " << rgFuncionario << std::endl;
}
void Funcionario::print_oi(){
    std::cout << "Tchau" << std::endl;
}