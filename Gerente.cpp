#include "Gerente.hpp"

double VALOR_BONIFICACAO = 15.0;

Gerente::Gerente(string nome, string idade, int rgFunc, double salarioBase, double bonificacao){
    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
    this->bonificacao = bonificacao;
}

void Gerente::printGerente(){
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){
    return numTotalVendas * VALOR_BONIFICACAO;
}