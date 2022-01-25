#include "Funcionario.hpp"

void Funcionario::print() const {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl;
}

void Funcionario::print_oi(){
    std::cout << "Tchau" << std::endl;
}
