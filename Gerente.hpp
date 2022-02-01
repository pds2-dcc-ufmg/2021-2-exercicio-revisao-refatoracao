#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;


class Gerente: public Funcionario {
    public:
        
        double bonificacao;


        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif
