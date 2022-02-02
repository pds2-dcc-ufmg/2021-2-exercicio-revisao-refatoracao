#include <iostream>
#include <string>

#include "Especialista.hpp"

Especialista::Especialista(std::string nome, int idade, std::string rgFunc, double salarioBase, std::string especialidade1)
        : especialidade(especialidade1), numAtendimentos(0), comissao(0)
{
    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
}

double Especialista::calcularComissao(double valorVenda)
{
    return valorVenda * 0.1;
}

void Especialista::print()
{
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
    std::cout << "Nome: " << nome << std::endl
              << "SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl
              << "Num Atendimentos: " << numAtendimentos << std::endl
              << "Salario Total: " << salarioBase + comissao << std::endl;
}