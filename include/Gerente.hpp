#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>

#include "Funcionario.hpp"


class Gerente : public Funcionario {

    public:

        Gerente(std::string nome, std::string idade, int rgFunc, double salarioBase);

        double calculaBonificacaoGerente(int numTotalVendas);

        void setValorBonificaco(double novoValor) {
            this->valorBonificacao = novoValor;
        }

        double getValorBonificacao() {
            return this->valorBonificacao;
        }

        void print();

    private: 
        
        double valorBonificacao = 15.0;

};

#endif

