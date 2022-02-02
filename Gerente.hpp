#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"


double valorBonificacao = 15.0;

class Gerente : public Funcionario {
    public:

        void print() override;

        void calcula_bonificacao(int numVendas);

        Gerente(std::string nome, int idade, int rgFunc, double salarioBase);
    
    private:
        double bonificacao = 0;

};

#endif

