#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

double valorBonificacao = 15.0;

class Gerente: public Funcionario {
    public:
        void imprimeInformacoes();
        double calculaBonificacaoGerente(int numTotalVendas);

};

#endif

