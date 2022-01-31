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
        std::string get_Idade();
        std::string get_Nome();
        int get_Rg();
        double get_Salario();

        void print();
};

#endif
