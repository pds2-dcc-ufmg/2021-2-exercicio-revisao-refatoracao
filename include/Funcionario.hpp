#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa {

    public:
        string getIdade();
        int getRg();
        double getSalario();
        double getSalarioTotal();
        void setIdade(string idade);
        void setRg(int rg);
        void setSalario(double salario);
        void setSalarioTotal(double valorAdicional);

    protected:
        string idade;
        int rg;
        double salario; 
        double salarioTotal;
};

#endif