#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

class Gerente : public Resgistro {

    public:

        Gerente();
        double valorBonificacao;
        void setBonificacao(double);
        double getBonificacao();
        double bonificacao;
        void print() ;
        double calculaBonificacaoGerente(int);
        
};

#endif