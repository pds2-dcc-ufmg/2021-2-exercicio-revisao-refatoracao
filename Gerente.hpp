#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario
{
private:
    double _bonificacao;

public:
    void print();
    double calcula_bonificacao_gerente(int numTOTALVendas);
    void set_bonificacao(double bonificacao);
    double get_bonificacao();
};

#endif
