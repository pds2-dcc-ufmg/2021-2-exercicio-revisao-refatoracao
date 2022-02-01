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
        // Construtor
        Gerente (string argNome, string argIdade, int argRg, double argSalario, double argBonificacao):
        Funcionario(argNome, argIdade, argRg, argSalario), bonificacao(argBonificacao) {}

        // Retorna bonificacao
        double getBonificacao();

        // Altera o valor de bonificacao
        void setBonificacao(double argBonificacao);

        // Calcula a bonificação baseada num total de vendas
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

        // Imprime informações do gerente
        void print() override;

};

#endif

