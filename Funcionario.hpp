#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

class Funcionario {
    public:
        double salario_base; 
        std::string idade;
        std::string nome;
        int rg_func;

        void print();
};

#endif