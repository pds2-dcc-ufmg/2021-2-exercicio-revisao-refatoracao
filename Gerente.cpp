#include <iostream>
#include <string>
#include "Gerente.hpp"

Gerente::Gerente(string _nome, string _idade, int _rg, double _salarioB, double _bonificacao) {
    this->nome = _nome;
    this->idade = _idade;
    this->rgFunc = _rg;
    this->salarioBase = _salarioB;
    this->bonificacao = _bonificacao;
}

void Gerente::print() {
    cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: " << nome << endl
        << "  Idade: " << idade << endl
        << "  RGFunc: " << rgFunc << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas) {
    return numTOTALVendas * ValorBONIFICACAO;
}