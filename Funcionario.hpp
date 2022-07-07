#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Funcionario {
    public:
        double salario_base; // valor minimo recebido pelo funcionario
        std::string idade;
        std::string nome;
        int rg_funcionario;

        void print();
        void print_Tchau();
};

#endif