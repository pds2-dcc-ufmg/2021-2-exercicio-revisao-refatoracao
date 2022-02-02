#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario{
    public:
        double bonificacao;

        Gerente(double SalarioBase = 0, std::string IDADE = "", std::string nome = "",
                int rgFunc = 0, double bonificacao = 0);

        void print();
        
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif
