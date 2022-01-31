#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string IDADE;
        std::string nome;
        int rgFunc;
        std::string get_Idade(){return IDADE;}
        std::string get_Nome(){return nome;}
        int get_Rg(){return rgFunc;}
        double get_Salario(){return SalarioBase;}

        void print();
};

#endif
