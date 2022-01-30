#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
public:
    double salarioBase;
    string idade;
    string nome;
    int rgFunc;

    void print();
    void print_oi();
};

#endif
