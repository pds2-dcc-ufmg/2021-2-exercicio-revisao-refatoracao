#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Funcionario 
{
    public:
        Funcionario();
        ~Funcionario();
        Funcionario(std::string, int, int, double);
        virtual void imprimeDados() = 0;
        std::string getNome();

    protected:
        std::string nome;
        int rg;
        int idade;
        double baseSalarial;
        double salarioTotal;
};

#endif
