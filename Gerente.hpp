#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"
#include <string>

using namespace std;

class Gerente : public Funcionario {
    public:

    Gerente(){}

    Gerente(string nome, string IDADE,  int rgFunc, double SalarioBase, double bonificacao);

    void print();

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

    double bonificacao;

};

#endif

