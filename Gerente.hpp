#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

using namespace std;


class Gerente : Funcionario{
    private:
    const double valorBonificacao = 15.0;

    public:
        Gerente(double salarioBase, string idade, string nome, int rg) : 
            Funcionario(salarioBase, idade, nome, rg){

                _bonificacao=0;
            };
        double _bonificacao;

        void print();

        double calculaBonificacaoGerente(int numTotalVendas);

};

#endif

