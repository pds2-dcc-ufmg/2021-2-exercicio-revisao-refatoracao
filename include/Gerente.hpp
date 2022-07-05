#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
    public:
        const double taxaBonificacao = 15.0;
        Gerente();
        Gerente(string nome, string idade, int rg, double salarioBase);
        void print() override;
        double getBonificacao(int totalVendas);
};

#endif
