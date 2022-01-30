#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario
{
public:
    string especialidade;

    double comissao(double ValorVenda);
    void print();
};

#endif
