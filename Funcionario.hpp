#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{
public:
    double salarioBase;
    int idade;
    string nome;
    int rg;

    void imprimeInformacoes()
    {

        cout << "[Funcionario]" << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rg << endl
             << "  Nome: " << nome << endl
             << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
    }
};

#endif
