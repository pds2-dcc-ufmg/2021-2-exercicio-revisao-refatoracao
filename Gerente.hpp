#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
    public:
        double bonificacao;
        
        Gerente(double s, string idade, string n, int rg, double b) 
            : Funcionario(s, idade, n, rg), bonificacao(b) {};

        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

    private:
        double const ValorBONIFICACAO = 15.0;
};

#endif

