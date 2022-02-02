#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente: public Funcionario {
    private :
        double bonificacao;
        double valorBonificacao;
    public:
        void Gerente();
        double getBonificacao();
        void setBonificacao(double bonificacaoNovo);
    
        void print();
    
        double calculaBonificacao(int numTotalVendas);

};

#endif

