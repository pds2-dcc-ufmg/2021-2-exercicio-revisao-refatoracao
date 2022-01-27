#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

double bonificacao = 15.0;

class Gerente : public Funcionario{
    private:
        double bonificacao;

    public:
        double getBonificacao() const;
        
        void setBonificacao(double bonificacao);

        void print() override;
        double calculaBonificacaoGerente(int numTotalVendas);

};

#endif