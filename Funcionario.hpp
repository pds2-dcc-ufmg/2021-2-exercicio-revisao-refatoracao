#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    
    public:
        double salario_base; // valor minimo recebido pelo funcionario
        std::string idade;
        std::string nome;
        int rg_func;

        void print();
        void print_oi();
};

#endif
