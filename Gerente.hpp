#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario
{
public:
    void print();

    void calculaSalarioTotal(int numTotalVendas);

private:
    double calculaBonificacao(int numTotalVendas);
    double salarioTotal;
};

#endif
