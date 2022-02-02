#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        string IDADE;
        string nome;
        int rgFunc;

        void print();
};

#endif
