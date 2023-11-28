#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;


class Gerente : public Funcionario {
    private:
        double bonificacao;
        double ValorBONIFICACAO = 15.0;

    public:
        void print();
        void set_bonificacao(double nova_bonificacao);
        double get_bonificacao();        
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
     

};

#endif

