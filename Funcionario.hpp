#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Funcionario {
    public:
        void print();

        void setNome(string);
        void setIdade(int);
        void setRg(int);
        void setSalarioBase(double);

        string getNome();
        int getIdade();
        int getRg();
        double getSalarioBase();
    
    protected:
        string nome;
        int idade;
        int rg;
        double salario_base;
};

#endif
