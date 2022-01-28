#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario{

    public:

        double bonificacao;

        Gerente(string _nome, string _IDADE, int _rgFunc, double _SalarioBase);

        void print() const override;

        void calculaBonificacaoGerente(int numTotalVendas);

    private:

        double ValorBonificacao = 15.0;

};

#endif

