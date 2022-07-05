#include <iostream>
#include <string>

#include "Gerente.hpp"

Gerente::Gerente(){}

Gerente::Gerente(string nome, string idade, int rg, double salarioBase){
    this->nome = nome;
    this->idade = idade;
    this->rg = rg;
    this->salario = salarioBase;
    this->salarioTotal = salarioBase;
}

void Gerente::print() {
    cout << "[Funcionario]" << endl
         << "[Gerente]"     << endl
         << "  Nome: "   << nome << endl
         << "  Idade: "  << idade << endl
         << "  RGFunc: " << rg << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salario << endl;
    cout << "Salario Total: " << salarioTotal << endl;
}

double Gerente::getBonificacao(int totalVendas){
    return totalVendas*taxaBonificacao;
}