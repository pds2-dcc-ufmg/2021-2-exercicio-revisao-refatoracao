#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
public:
    double salarioBase;
    int idade;
    std::string nome;
    int rg;

    void print();
};

#endif
