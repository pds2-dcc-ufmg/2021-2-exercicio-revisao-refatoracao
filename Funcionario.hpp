#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {

    public:

        double salarioBase; // salario mínimo recebido pelo funcionário
        string idade;
        string nome;
        int rgFunc;

        void print();
        
};

#endif
