#include <iostream>
#include <string>
#include "Gerente.hpp"

Gerente::Gerente(string nome, int idade, int rg, double salarioBase): Funcionario(nome, idade, rg, salarioBase){}

double Gerente::calcula_bonus(int totalVendas){
    double x;
    return totalVendas*valorBonus;
}

void Gerente::print() {
    cout << "[Gerente]" << endl;
    Funcionario::print();
    cout << " Bonificação: " << calcula_bonus << endl;
}

double Gerente::getSalario(){
    Funcionario::getSalario;
}