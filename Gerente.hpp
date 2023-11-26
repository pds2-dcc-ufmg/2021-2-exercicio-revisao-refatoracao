#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double VALORBONIFICACAO = 15.0;

class Gerente : public Funcionario
{

public:
    Gerente(string _nome, string _idade, int _rgFunc, double _salarioBase)
        : Funcionario(_nome, _idade, _rgFunc, _salarioBase) {}    

    double bonificacao;

    void print()
    {
        cout << "[Funcionario]" << endl
             << "[Gerente]" << endl
             << "  Nome: " << nome << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rgFunc << endl
             << "  salarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
    }

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas)
    {

        return numTOTALVendas * VALORBONIFICACAO;
    }
};

#endif
