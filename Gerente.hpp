#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

double const BONIFICACAO = 15.0;

class Gerente : public Funcionario
{
    public:
        double bonificacao;

        Gerente(std::string _nome,
                std::string _idade,
                int _rgFunc,
                double _salarioBase);

        void print();
        void calculaBonificacao(int totalVendas);
};

#endif
