#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iomanip>
#include <iostream>

using namespace std;

class Gerente : public Funcionario {
private:
    double ValorBONIFICACAO = 15.0;
    double bonificacao;

public:
    void setBonificacao(double bonificacao);

    double getBonificacao();

    void print();

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
};

#endif
