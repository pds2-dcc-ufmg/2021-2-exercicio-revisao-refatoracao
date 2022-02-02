#include "Funcionario.hpp"

void Funcionario::print()
{
    std::cout << "  Idade: " << idade << std::endl
              << "  RGFunc: " << rgFuncionario << std::endl
              << "  Nome: " << nome << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
}

std::string Funcionario::getName()
{
    return this->nome;
}

Funcionario::~Funcionario() {}