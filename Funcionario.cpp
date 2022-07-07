#include "Funcionario.hpp"

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "  Idade: " << idade << std::endl;
    std::cout << "  RGFunc: " << rg_funcionario << std::endl;
}

void Funcionario::print_Tchau(){
    std::cout << "Tchau" << std::endl;
}