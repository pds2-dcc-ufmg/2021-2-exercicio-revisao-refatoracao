#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    protected:
        double _salarioBase; // valor mínimo recebido pelo funcionário
        int _idade;
        std::string _nome;
        int _rgFunc;

    public:

        virtual void print();
};

#endif