#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario
{
public:
    Gerente();

    void print();

    double calculaBonificacao(int numTOTALVendas);
};

#endif
