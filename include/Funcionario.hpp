#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"



class Funcionario : public Pessoa {
    public:
        double SalarioBase;
        int rgFunc;
        void ImprimeDados() const override;
        double Comissao;
};

#endif
