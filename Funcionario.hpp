#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    public:
        std::string nome;
        std::string idade;
        int rgfunc;
        double salariobase; // valor mínimo recebido pelo funcionário

        virtual void print();
          
};

#endif