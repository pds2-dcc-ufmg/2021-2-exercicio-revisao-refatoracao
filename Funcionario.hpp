#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    private:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        string IDADE;
        string nome;
        int rgFunc;
     public:
        void print();

        void print_oi();
};

#endif
