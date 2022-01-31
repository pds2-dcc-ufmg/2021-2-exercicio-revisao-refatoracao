#ifndef GERENTE_H
#define GERENTE_H

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
    public:
        void CalculaBonificacao(double NumTotalVendas); // Calcula de acordo com o número de vendas e atribui o valor calculado a "Bonificacao"
        double getBonificacao();

        void print() override; // Imprime na tela os dados do gerente

    private:
        double Bonificacao = 0;
};

#endif

