#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        string Idade;
        string Nome;
        int RG_Func;

    Funcionario (){};
    Funcionario (double SalarioBase_, string Idade_, string Nome_, int RG_Func_){}
    void print();
};

#endif
