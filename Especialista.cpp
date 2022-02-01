#include <iostream>
#include <string>
#include "Especialista.hpp"

double Especialista::valorcomissao(double ValorVenda)
{
    double c = ValorVenda*perc;
    return c;
}

void Especialista::print()
{
    std::cout << "[Especialista]" << endl;
    Funcionario::print();
    std::cout << "  Nome: " << nome << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

Especialista::Especialista(double SalarioBase, std::string IDADE, std::string nome,
                int rgFunc, std::string especialidade, int numAtendimentos, double comissao)
{
    this->SalarioBase = SalarioBase;
    this->IDADE = IDADE;
    this->nome = nome;
    this->rgFunc = rgFunc;
    this->especialidade = especialidade;
    this->numAtendimentos = numAtendimentos;
    this->comissao = comissao;
