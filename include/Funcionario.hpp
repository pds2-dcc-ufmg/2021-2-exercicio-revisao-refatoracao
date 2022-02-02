#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

class Funcionario : public Pessoa {
    public:
        double _salario_base;
        double _salario_total;
        int _idade;
        std::string _rg_func;

        Funcionario(std::string nome, int idade, std::string rg_func, double salario_base);

        virtual void calcular_salario_total(){};
};

#endif
