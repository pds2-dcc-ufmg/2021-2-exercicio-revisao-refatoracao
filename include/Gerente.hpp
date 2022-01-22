#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario {
    public:
        double bonificacao;

        void print();
        
        double calculaBonificacaoGerente(int numTotalVendas);
};

#endif

