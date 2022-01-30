#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print()
{
    std::cout << "[Funcionario]" << std::endl
              << "[Gerente]" << std::endl
              << "Nome: " << nome << std::endl
              << "Idade: " << idade << std::endl
              << "RGFunc: " << rgFunc << std::endl
              << "SalarioBase: R$ " << std::fixed << setprecision(2) << salarioBase << std::endl
              << "Salario Total: " << salarioBase + bonificacao << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas)
{
    double valorBonificacao = 15.0;
    double x;
    return numTotalVendas * valorBonificacao;
}