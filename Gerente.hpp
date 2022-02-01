#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario{
    public:
        double valorBonificacao = 15.0;
        void print() override;
        double calcula_bonificacao_total(int numTotalVendas);

};

#endif
