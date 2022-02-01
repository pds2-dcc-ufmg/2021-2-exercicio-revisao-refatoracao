#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

using namespace std;

static double ValorBONIFICACAO = 15.0;

class Gerente : Funcionario{
    public:
        Gerente(double salarioBase, string idade, string nome, int rg, double bonificacao) : 
            Funcionario(salarioBase, idade, nome, rg), _bonificacao(bonificacao){};
        double _bonificacao;

        void print();

        double calculaBonificacaoGerente(int numTotalVendas);

};

#endif

