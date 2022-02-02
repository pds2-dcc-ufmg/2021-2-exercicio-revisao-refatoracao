#include "Especialista.hpp"

const double perc = 0.1;

Especialista::Especialista(string nome,  string IDADE, int rgFunc, double SalarioBase) {
    this->nome = nome;
    this->IDADE = IDADE;
    this->rgFunc = rgFunc;
    this->SalarioBase = SalarioBase;
}

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}

void Especialista::print() {
    std::cout << "[Especialista]" << endl;
    Funcionario::print();
}