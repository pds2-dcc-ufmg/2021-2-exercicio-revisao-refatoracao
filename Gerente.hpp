#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
    public:
        double bonificacao;
        
        Gerente(string n, string idade, int rg, double s, double b) 
            : Funcionario(n, idade, rg, s), bonificacao(b) {};

        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

    private:
        double const ValorBONIFICACAO = 15.0;
};

#endif

