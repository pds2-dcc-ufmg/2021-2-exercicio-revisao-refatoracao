#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

class Gerente : public Funcionario
{

public:
    void print();
    void calculaSalario(int numTOTALVendas);
    Gerente(std::string nome, std::string rgFunc, int idade, double salarioBase);

private:
    double VALOR_BONIFICACAO = 15.0;
    double bonificacao;
};

#endif
