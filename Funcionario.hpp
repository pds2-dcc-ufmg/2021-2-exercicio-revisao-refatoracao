#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    public:

        double SalarioBase; // valor mínimo recebido pelo funcionário
        int idade;
        string nome;
        int rgFunc;

        void print(); // imprime dados do funcionario
}

#endif
