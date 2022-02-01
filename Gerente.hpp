#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

double valorBonificacao = 15.0;

class Gerente : public Funcionario
{
public:
    void imprimeInformacoes();
    double calculaBonificacao(int numTotalVendas);

    Gerente(double salarioBase, int idade, string nome, int rg)
    {
        this->salarioBase = salarioBase;
        this->idade = idade;
        this->nome = nome;
        this->rg = rg;
    }
};

#endif
