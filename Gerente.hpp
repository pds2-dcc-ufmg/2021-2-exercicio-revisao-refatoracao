#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario2.hpp"

static double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    public:
        double bonificacao;

        Gerente(double SalarioBase, std::string IDADE, std::string nome,int rgFunc,double bonificacao);
        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
        void ImpSalarioTotal();

};

#endif
