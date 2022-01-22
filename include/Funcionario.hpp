#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        double salarioBase; // valor minimo recebido pelo funcionario
        std::string idade;
        std::string nome;
        int rgFunc;

        void print();

        void print_tchau();
};

#endif
