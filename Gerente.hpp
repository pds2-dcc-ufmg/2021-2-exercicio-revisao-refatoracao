#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

class Gerente : public Funcionario
{
public:
    double bonificacao;

    Gerente(std::string nome, int idade, std::string rgFunc, double salarioBase);

    void print();
    double calculaBonificacaoGerente(int numTotalVendas);
};

#endif
