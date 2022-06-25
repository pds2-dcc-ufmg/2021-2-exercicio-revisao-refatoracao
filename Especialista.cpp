#include <iostream>
#include <string>
#include "Especialista.hpp"

Especialista::Especialista(){}

void Especialista::print()
{
    cout << "[Especialista]" << endl;
    Funcionario::print();
}

double Especialista::comissao(double valor_venda)
{
    return valor_venda * 0.1;
}
