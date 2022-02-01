#ifndef GERENTE_HPP
#define GERENTE_HPP

#include<iostream> 
#include "Funcionario.hpp"
#include "Venda.hpp"

using namespace std;

class Gerente: public Funcionario {
    private:
        static const double bonificacaoPorVenda;
        double valorTotalBonificacao = 0; //Guarda a comissão do gerente

    public:
        Gerente(const string& nome, int idade, int rgFunc, double salarioBase);
        void print() override;
        void calculaBonificacaoGerente(int numTotalVendas);
};

#endif