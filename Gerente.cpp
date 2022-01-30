#include <iostream>
#include <string>
#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string idade, int rgFunc, double salarioBase)
{
    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
    this->bonificacao = 0;
}

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