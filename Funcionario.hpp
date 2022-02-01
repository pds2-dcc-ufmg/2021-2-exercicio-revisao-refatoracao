#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

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
