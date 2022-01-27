#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print(){

    cout << "Gerente:" << endl;
    
    Funcionario::print();

    cout << "  Nome: " << nome << endl
         << "  Salario Base: R$ " << fixed << setprecision(2) << salarioBase <<endl;
    
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas) {

    return numTotalVendas*ValorBonificacao;

}
