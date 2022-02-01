#include <iostream>
#include <string>
#include "Funcionario.hpp"

string Funcionario::getNome(){
    return nome;
};

double Funcionario::getSalarioBase(){
    return salarioBase;
};

void Funcionario::imprimir()
{
    cout 
         << "[Funcionario]" << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rg << endl
         << "  Nome: " << nome << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
}