#include <iostream>
#include <string>
#include "Especialista.hpp"

double percWanda = 0.1;

double Especialista::comissao(double ValorVenda)
{
    double perc = 0.1;
    double c = ValorVenda * perc;
    return c;
}

void Especialista::print()
{
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
    std::cout << "Nome: " << nome << std::endl
              << "SalarioBase: R$ " << std::fixed << setprecision(2) << salarioBase << std::endl;
}