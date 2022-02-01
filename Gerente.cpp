#include <iostream>
#include <string>

#include "Gerente.hpp"

double valorBonificacao = 15.0;

void Gerente::print() {
    cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl
            << "Salario Total: " << salarioBase + bonificacao << endl;
}

void Gerente::calculaBonificacaoGerente(int numTotalVendas){
    bonificacao = numTotalVendas*valorBonificacao;
}