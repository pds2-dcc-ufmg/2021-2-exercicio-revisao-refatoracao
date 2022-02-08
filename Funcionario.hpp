#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario{
    public:
        double salario_base; // valor mínimo recebido pelo funcionário
        std::string idade;
        std::string nome;
        int rg_func;

        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << idade << std::endl
            << "  RGFunc: " << rg_func << std::endl;
        }
};

#endif
