#include <iostream>
#include <string>

#include "Especialista.hpp"

double Especialista::comissao(double valorVenda)
{
    return valorVenda * 0.1;
}

void Especialista::print()
{
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
    std::cout << "Nome: " << nome << std::endl
              << "SalarioBase: R$ " << std::fixed << setprecision(2) << salarioBase << std::endl;
}