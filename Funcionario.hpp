#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <iomanip>

class Funcionario
{
    public:
        std::string nome;
        std::string idade;
        int rgFunc;
        double salarioBase;

        void print();
};

#endif
