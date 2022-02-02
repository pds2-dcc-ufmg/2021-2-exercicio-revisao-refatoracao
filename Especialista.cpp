#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda)
{
    double c = ValorVenda * PERC;
    return c;
}

void Especialista::print()
{

    cout << "[Especialista]" << endl;
    Funcionario::print();

    cout << "  Nome: " << nome << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
}