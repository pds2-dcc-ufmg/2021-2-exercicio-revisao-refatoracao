#include <iostream>
#include <string>
#include "Especialista.hpp"

double Especialista::calcula_comissao(double valorVenda){
    double c = valorVenda*perc;
    return c;
}

void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
    cout << " Comissão: " << calcula_comissao << endl;
}