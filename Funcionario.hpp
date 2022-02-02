#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double salario_base; // valor mínimo recebido pelo funcionário
        string idade;
        string nome;
        int rg_func;

        void print();
};

#endif
