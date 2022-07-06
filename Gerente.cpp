#include <iostream>
#include <string>
#include "Gerente.hpp"

double Gerente::calcula_bonus(int totalVendas){
    double x;
    return totalVendas*valorBonus;
}

void Gerente::print() {
    cout << "[Gerente]" << endl;
    Funcionario::print();
    cout << " Bonificação: " << calcula_bonus << endl;
}