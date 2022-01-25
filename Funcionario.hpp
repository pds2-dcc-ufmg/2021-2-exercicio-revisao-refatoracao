#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rgFunc;

        virtual void print() const;
        void print_oi();
};

#endif
