#include <iostream>
#include <iomanip>
#include "Especialista.hpp"

Especialista::Especialista(std::string nome, std::string IDADE, int rgFunc, double SalarioBase, std::string especialidade):
Funcionario(nome, IDADE, rgFunc, SalarioBase), especialidade(especialidade) {}

void Especialista::calcula_COMISSAO_ESPECIALISTA(const double &ValorVenda) {
    comissao += ValorVenda*perc;
}

void Especialista::incNumAtendimentos() {numAtendimentos++;}

int Especialista::getNumAtendimentos() const {return numAtendimentos;}

double Especialista::calcula_SALARIO_TOTAL() const {
    return SalarioBase + comissao;
};

void Especialista::print() const {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout << "  Nome: " << nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
}