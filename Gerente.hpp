#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {

    public:
        
        double getBonificacao();
        void setBonificacao(double newBonificacao);
        void print();

        double calculaBonificacao(int numTOTALVendas);

        Gerente(string nome = "", string idade = "", int rgFunc = 0, double salarioBase = 0, double bonificacao = 15.0);

    private:

        double bonificacao;

};

#endif

