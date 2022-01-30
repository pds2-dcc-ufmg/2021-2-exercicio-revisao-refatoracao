#include <iostream>
#include <string>

#include "Especialista.hpp"

Especialista::Especialista(std::string nome, std::string idade, int rgFunc, double salarioBase, std::string especialidade)
{
    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
    this->especialidade = especialidade;
    this->numAtendimentos = 0;
    this->comissao = 0;
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
              << "SalarioBase: R$ " << std::fixed << setprecision(2) << salarioBase << std::endl
              << "Num Atendimentos: " << numAtendimentos << std::endl
              << "Salario Total: " << salarioBase + comissao << std::endl;
}