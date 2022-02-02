#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario
{
public:
    Especialista();
    std::string especialidade;

    double comissao(double);

    void print();
};

#endif
