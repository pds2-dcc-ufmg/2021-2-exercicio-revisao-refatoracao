#include <iostream>
#include <string>
#include "Especialista.hpp"

Especialista::Especialista(double SalarioBase, string idade, string nome, int rgFunc, string especialidade){
    this->SalarioBase = SalarioBase;
    this->idade = idade;
    this->NOME = nome;
    this->rgFunc = rgFunc;
    this->especialidade = especialidade;
}

double comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}


void Especialista::print_esp() {

    std::cout << "[Especialista]" << endl;

    Funcionario::print();

    std::cout << "  Nome: " << NOME << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}