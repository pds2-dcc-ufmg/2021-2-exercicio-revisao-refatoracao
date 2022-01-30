#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa{

    public:

        // valor minimo recebido pelo funcionario
        double SalarioBase;
        int rgFunc;

        Funcionario(double SalarioBase = 0, string IDADE = " ", string nome = " ", int rgFunc = 0);

        void print() override;

        void print_oi();
};

#endif
