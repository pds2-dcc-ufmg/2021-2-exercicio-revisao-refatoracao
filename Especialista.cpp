#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"

Especialista::Especialista(string _nome, string _idade, int _rgFunc, double _SalarioBase, string _especialidade) {
    this->nome = _nome;
    this->idade = _idade;
    this->rgFunc = _rgFunc;
    this->SalarioBase = _SalarioBase;
    this->especialidade = _especialidade;
}

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
        return c;
}

void Especialista::print() const{

    cout << "[Especialista]" << endl;
    Funcionario::print();

    cout << "  Nome: " << nome << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl
    << "Num Atendimentos: " << numAtendimentos << endl
    << "Salario Total: " << SalarioBase + comissaoTotal << endl;

}

void Especialista::computaAtendimento() {
    this->numAtendimentos +=1;
}