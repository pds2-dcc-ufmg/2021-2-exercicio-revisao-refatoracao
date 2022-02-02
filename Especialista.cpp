#include <iostream>
#include <string>
#include "Especialista.hpp"

Especialista::Especialista()
{
}

void Especialista::print()
{
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
}

double Especialista::comissao(double ValorVenda)
{
    return ValorVenda * 0.1;
}
