#include <iostream>
#include <string>
#include "Gerente.hpp"

using namespace std;

Gerente::Gerente(){}

void Gerente::print()
{
    cout << "[Gerente]" << endl;
    Funcionario::print();
}

double Gerente::CalcularBonificacao(int num_total_vendas)
{
    double valor_bonificacao = 15.0;
    return num_total_vendas * valor_bonificacao;
}
