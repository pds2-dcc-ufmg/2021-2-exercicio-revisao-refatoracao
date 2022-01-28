#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"


double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    public:
        double bonificacao;


        void print() {
            std::cout << "[Gerente]" << std::endl;
            Funcionario::print();
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }

};

#endif

