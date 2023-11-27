#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <iomanip>

class Especialista : public Funcionario {
public:

    static double perc;


    std::string especialidade;

    double comissao(double ValorVenda);

    void print();
};

double Especialista::perc = 0.1;


#endif
