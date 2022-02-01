#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario  {
    public:
        double bonificacao;

        virtual void print() override;
        void calculaBonificacaoGerente(int numTotalVendas);
        Gerente(string nome, string idade, double salarioBase,  int rgFunc):
        Funcionario(nome, idade, salarioBase, rgFunc), bonificacao(0){};
};
#endif