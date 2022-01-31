#include "Funcionario.hpp"

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << this->IDADE << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->SalarioBase << std::endl;
}

void print_oi(){
    std::cout << "Tchau" << std::endl;
}