#include <iostream>
#include <string>
#include "Funcionario.hpp"

Funcionario::Funcionario(string nome, int idade, int rg, double salarioBase){
    _nome = nome;
    _idade = idade;
    _rg = rg;
    _salarioBase = salarioBase;
}

void Funcionario::print() {
    cout << " Nome: " << _nome << endl 
        << " Idade: " << _idade << endl
            << " RG do funcionário: " << _rg << endl
                << " Salário base: R$ " << fixed << setprecision(2) << _salarioBase <<endl;
}

string Funcionario::getNome(){
    return _nome;
}

double Funcionario::getSalario(){
    return _salarioBase;
}