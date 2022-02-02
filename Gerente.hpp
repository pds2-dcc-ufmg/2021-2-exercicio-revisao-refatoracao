#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

#define VALOR_BONIFICACAO 15

class Gerente : public Funcionario
{

public:
    double bonificacao;

    void print()
    {
        cout << "[Funcionario]" << endl
             << "[Gerente]" << endl
             << "  Nome: " << nome << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rg_func << endl
             << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base << endl;
    }

    double calculaBonificacaoGerente(int num_total_vendas)
    {
        return num_total_vendas * VALOR_BONIFICACAO;
    }
};

#endif
