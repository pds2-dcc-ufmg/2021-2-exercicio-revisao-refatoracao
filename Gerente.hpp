#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    public:
        void print() override; 

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

        double getBonificacao();
        
        void setBonificacao(double _bonificacao);
    private:
        double bonificacao;
    

};

#endif

