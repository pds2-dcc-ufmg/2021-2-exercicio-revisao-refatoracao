#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

double const BONIFICACAO = 15.0;

class Gerente : public Funcionario {
    private:
        double bonificacao;
    
    public:
        Gerente (string argNome, string argIdade, int argRg, double argSalario, double argBonificacao):
        Funcionario(argNome, argIdade, argRg, argSalario), bonificacao(argBonificacao) {}

        void print() override;
        double getBonificacao();
        void setBonificacao(double argBonificacao);
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

