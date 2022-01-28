#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print() {

    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << getNome() << endl
    << "  Idade: " << getIdade() << endl
    << "  RGFunc: " << getRG() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;

}

double Gerente::calculaBonificacao(int numTOTALVendas){
    
    double x;
    return numTOTALVendas*bonificacao;

}

double Gerente::getBonificacao() {

    return bonificacao;

}

void Gerente::setBonificacao(double newBonificacao) {

    this->bonificacao = newBonificacao;

}

Gerente::Gerente(string nome, string idade, int rgFunc, double salarioBase, double bonificacao) : 
    Funcionario(salarioBase, idade, nome, rgFunc) {

    this->bonificacao = bonificacao;

}