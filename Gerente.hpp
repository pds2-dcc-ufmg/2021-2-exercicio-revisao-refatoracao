#ifndef GERENTE_H
#define GERENTE_H

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

class Gerente : public Funcionario{

    private:

        double Bonificacao = 0;
        double BonificacaoPorVenda = 15.0;

    public:

        Gerente();
        Gerente(std::string nome, int idade, int rgfunc, double salariobase);

        void print() override;

        double calculaBonificacaoGerente(int numTotalVendas);

        double calculaSalarioTotal() override;

        void addBonificacao(double novo);
        double getBonificacao();

};

#endif

