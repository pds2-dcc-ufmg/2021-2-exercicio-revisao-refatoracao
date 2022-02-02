#include <iostream>
#include <string>
#include "Gerente.hpp"

Gerente::Gerente(std::string nome1, int idade1, std::string rgFunc1, double salarioBase1)
    : bonificacao(0)
{
    this->nome = nome1;
    this->idade = idade1;
    this->rgFunc = rgFunc1;
    this->salarioBase = salarioBase1;
}

void Gerente::print()
{
    std::cout << "[Funcionario]" << std::endl
              << "[Gerente]" << std::endl
              << "Nome: " << nome << std::endl
              << "Idade: " << idade << std::endl
              << "RGFunc: " << rgFunc << std::endl
              << "SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl
              << "Salario Total: " << salarioBase + bonificacao << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas)
{
    return numTotalVendas * 15.0;
}