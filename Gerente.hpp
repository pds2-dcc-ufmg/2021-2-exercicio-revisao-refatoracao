#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario
{
public:
    Gerente(string nome, int idade, int rg, double salarioBase, double valorBonificacao) : Funcionario(nome, idade, rg, salarioBase), valorBonificacao(valorBonificacao){};
    void imprimir();
    void calculaBonificacao(int numVendas);

private:
    double valorBonificacao;
    double bonificacao;
};

#endif
