#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>



class Funcionario {
    public:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        std::string idade;
        std::string nome;
        int rgFunc;

        void print(); 
};

#endif
