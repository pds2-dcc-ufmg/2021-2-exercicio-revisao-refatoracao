#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    protected:
        std::string Idade;
        std::string Nome;
        int RG;
        double SalarioBase; 

    public:
        void Print();

        std::string get_Idade();

        std::string get_Nome();

        int get_RG();

        double get_SalarioBase();

};

#endif
