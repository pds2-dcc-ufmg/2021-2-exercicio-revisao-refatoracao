#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;
class Gerente : public Funcionario
{
public:
    Gerente();
    void print();
    double CalcularBonificacao(int num_total_vendas);
};

#endif
