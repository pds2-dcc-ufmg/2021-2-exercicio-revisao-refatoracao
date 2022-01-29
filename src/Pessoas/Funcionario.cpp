#include <iostream>
#include <string>
#include "../../include/Pessoas/Funcionario.hpp"


Funcionario::Funcionario(double salarioBase,string Idade, string nome, int rgFunc){
    _IDADE = Idade;
    _SalarioBase = salarioBase;
    _nome = nome;
    _rgFunc = rgFunc;
}
void Funcionario::print() {
    cout << "[Funcionario]" << endl
    << "  Idade: " << _IDADE << endl
    << "  RGFunc: " << _rgFunc << endl;
}

void Funcionario::print_oi(){
    cout << "Tchau" << endl;
}