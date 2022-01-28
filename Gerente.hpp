#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"
#include "Pessoa.hpp"

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {

    public:
        
        double getBonificacao();
        void print() override;

        double calculaBonificacao;

    private:

        double bonificacao;

};

#endif

