#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double salarioBase;
        string idade;
        string nome;
        int rgFunc;

        void print();
        Funcionario(string nome, string idade, double salarioBase,  int rgFunc): 
        nome(nome), idade(idade), salarioBase(salarioBase), rgFunc(rgFunc){};
};
#endif