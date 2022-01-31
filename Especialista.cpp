#include <iostream>
#include <string>
#include "Especialista.hpp"

Especialista::Especialista(string _nome, string _idade, int _rg, double _salarioB, string _especialidade, int _numAtendimentos, double _comissao) {
    this->nome = _nome;
    this->idade = _idade;
    this->rgFunc = _rg;
    this->salarioBase = _salarioB;
    this->especialidade = _especialidade;
    this->numAtendimentos = _numAtendimentos;
    this->comissaoValor = _comissao;
}

double Especialista::comissao(double ValorVenda) {
    return ValorVenda * perc;
}

void Especialista::print() {
    std::cout << "[Especialista]" << endl;
    Funcionario::print();

    std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;

    cout << "Num Atendimentos: " << numAtendimentos << endl;
    cout << "Salario Total: " << salarioBase + comissaoValor << endl;
}
