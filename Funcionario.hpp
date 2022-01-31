#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        double SalarioBase;
        std::string IDADE, nome;
        int rgFunc;
    Funcionario(){};
    Funcionario(double SalarioBase,std::string idade,std::string nome, int rgFunc);
        void print();


};

#endif
