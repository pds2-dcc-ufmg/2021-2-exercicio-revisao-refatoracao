#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

class Gerente : public Funcionario
{
public:
    double bonificacao;

    Gerente(std::string nome1, int idade1, std::string rgFunc1, double salarioBase1);

    void print() override;
    double calculaBonificacaoGerente(int numTotalVendas);
};

#endif
