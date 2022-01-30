#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    
    public:

        double bonificacao;

        Gerente(string nome = " ", string idade = " ", int rgFunc = 0,
                 double SalarioBase = 0, double bonificacao = 0);


        void print_gerente();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

