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

    void print()
    {
        cout << "[Funcionario]" << endl
             << "  Idade: " << idade << endl
             << "  Rg: " << rg << endl;
    }
};

#endif
