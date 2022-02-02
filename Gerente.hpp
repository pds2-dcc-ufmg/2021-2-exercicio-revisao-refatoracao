#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valor_bonificacao = 15.0;

class Gerente
{
public:
    double salario_base; // valor minimo recebido pelo funcionário
    string idade;
    string nome;
    int rgFunc;
    double bonificacao;

    void print()
    {
        cout << "[Funcionario]" << endl
             << "[Gerente]" << endl
             << "  Nome: " << nome << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rgFunc << endl
             << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base << endl;
    }

    double calcula_bonificacao(int num_total_vendas)
    {
        return num_total_vendas * valor_bonificacao;
    }
};

#endif
