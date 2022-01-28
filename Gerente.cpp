#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"

Gerente::Gerente(string _nome, string _idade, int _rgFunc, double _SalarioBase) {
    this->nome = _nome;
    this->idade = _idade;
    this->rgFunc = _rgFunc;
    this->SalarioBase = _SalarioBase;
}

void Gerente::print() const{
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl
    << "Salario Total: " << SalarioBase + bonificacao << endl;
}

void Gerente::calculaBonificacaoGerente(int numTotalVendas){
    double x;
    bonificacao =  numTotalVendas*ValorBonificacao;
}