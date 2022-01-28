#include <iostream>
#include <string>

#include "Especialista.hpp"

double Especialista:: comissao(double valorVenda) {

    return valorVenda*perc;

}

void Especialista::print() {
    
    cout << "Especialista:" << endl;

    Funcionario::print();

    cout << "  Nome: " << nome << endl
         << "  Salario Base: R$ " << fixed << setprecision(2) << salarioBase <<endl;
    
}
