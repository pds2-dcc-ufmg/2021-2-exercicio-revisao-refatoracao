#include <iostream>
#include <string>
#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda) {

        double c = ValorVenda*perc;
        return c;

}


void Especialista::print() {

    std::cout << "[Especialista]" << endl;
    Funcionario::print();

    std::cout << "  Nome: " << getNome() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;

}

string Especialista::getEspecialidade() {

    return especialidade;

}

Especialista::Especialista(string nome, string idade, int rgFunc, double salarioBase, string especialidade) {

    setNome(nome);
    setIdade(idade);
    setRG(rgFunc);
    setSalarioBase(salarioBase);
    this->especialidade = especialidade;

}