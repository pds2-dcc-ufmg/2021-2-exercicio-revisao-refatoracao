#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

class Gerente
{
public:
    double salarioBase;
    string idade;
    string nome;
    int rgFunc;
    double bonificacao;

    void print();
    double calculaBonificacaoGerente(int numTotalVendas);
};

#endif
