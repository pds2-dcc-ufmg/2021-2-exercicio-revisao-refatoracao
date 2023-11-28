#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        double _salarioBase; // valor mínimo recebido pelo funcionário
        string _idade;
        string _nome;
        int _rgFunc;

        void print();
};

#endif
