#include <iostream>
#include <string>
#include "Especialista.hpp"

Especialista::Especialista(double SalarioBase,
            string IDADE,
            string nome,
            int rgFunc,
            string especialidade, 
            int numAtendimentos, 
            double comissao){
    this->SalarioBase = SalarioBase;
    this->IDADE = IDADE;
    this->nome = nome;
    this->rgFunc = rgFunc;
    this->especialidade = especialidade;
    this->numAtendimentos = numAtendimentos;
    this->comissao = comissao;
}

void Especialista::print(){
    cout << "[Especialista]" << endl;
    Funcionario::print();

    cout << "  Nome: " << nome << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

double Especialista::AumentoComissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}
