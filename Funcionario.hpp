#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string IDADE;
        string nome;
        int rgFunc;

        void print();

        void print_oi();
};

#endif
