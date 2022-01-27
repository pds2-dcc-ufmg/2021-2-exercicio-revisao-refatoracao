#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente : public Funcionario {

    public:

       double ValorBonificacao = 15.0;

        void print();
        double calculaBonificacaoGerente(int numTotalVendas);

};

#endif
