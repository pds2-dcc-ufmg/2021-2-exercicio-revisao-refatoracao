#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"
#include "Cliente.hpp"

class Gerente: public Funcionario {

    public:

        void setBonificacao(double bonificacao);
        double getBonificacao();

        void print(); //imprime dados do gerente

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
        
    private:

        double bonificacao;

};

#endif

