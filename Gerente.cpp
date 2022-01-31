#include <iostream>
#include <string>

#include "Gerente.hpp"

void Gerente::print() {
    cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){
    return numTotalVendas*ValorBonificacao;
}