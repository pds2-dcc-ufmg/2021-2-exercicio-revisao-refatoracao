#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"

using namespace std;

#define PERC 0.1

class Especialista : public Funcionario
{
public:
    string especialidade;

    double comissao(double ValorVenda);
    void print();
};

#endif
