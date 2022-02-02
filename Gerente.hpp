#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

double valorBonificacao = 15.0;

class Gerente : public Funcionario
{
public:
    double valor_bonificacao = 15.0;

    Gerente(double salarioBase, int idade, string nome, int rg)
    {
        this->salarioBase = salarioBase;
        this->idade = idade;
        this->nome = nome;
        this->rg = rg;
    }

    void calculaBonificacao(int numTotalServicos)
    {
        this->bonificacao += numTotalServicos * this->valorBonificacao;
    }

    void imprimeInformacoes()
    {
        cout << "[Gerente]" << endl;
        Funcionario::imprimeInformacoes();
        cout << "Salario Total: " << salarioBase + bonificacao << endl;
    }

private:
    double bonificacao = 0;
    double valorBonificacao = 15.0;
};

#endif
