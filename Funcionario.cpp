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
    cout << "Nome: " << nome << endl
         << "Idade: " << idade << endl
         << "RGFunc: " << rg << endl
         << "SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
}