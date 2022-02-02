#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

class Funcionario : public Pessoa {
    protected:
        double _salario_base;
        double _salario_total;
        int _idade;
        std::string _rg_func;
        virtual void calcular_salario_total(){};

    public:
        Funcionario(std::string nome, int idade, std::string rg_func, double salario_base);
};

#endif
