#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        std::string nome;
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        int rg; //registro geral (rg) do funcionario

        virtual void print();
        void print_tchau();
};

#endif