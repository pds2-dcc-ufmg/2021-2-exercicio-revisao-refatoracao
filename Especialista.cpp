#include "Especialista.hpp"
#include<iostream>

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}
    
void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
        cout << "  Nome: " << _Nome << endl;
        cout << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}