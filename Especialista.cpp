#include "Especialista.hpp"

Especialista::Especialista(std::string nome, int idade, int rg, double salarioBase, std::string especialidade)
{
    this->nome = nome;
    this->idade = idade;
    this->rg = rg;
    this->salarioBase = salarioBase;
    this->especialidade = especialidade;
}

double Especialista::calculaComissao(double valorVenda)
{
    return valorVenda * 0.1;
}

void Especialista::print()
{

    std::cout << "[Especialista]" << std::endl;

    Funcionario::print();

    std::cout << " Nome: " << nome << std::endl
              << " SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
}