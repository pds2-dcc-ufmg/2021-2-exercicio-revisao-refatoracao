#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(double SalarioBase_, string Idade_, string Nome_, int RG_Func_){
    SalarioBase = SalarioBase_;
    Idade = Idade_;
    Nome = Nome_;
    RG_Func = RG_Func_;
}

void Funcionario::print() {
    cout << "[Funcionario]" << endl;
    cout << "  Idade: " << Idade << endl;
    cout << "  RGFunc: " << RG_Func << endl;
}