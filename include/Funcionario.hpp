#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{
public:
    void ImprimeDados() const override;
    void setComissao(double Comissao);
    double getComissao() const;
    void addComissao(double Comissao);
    double getSalarioBase() const;

protected:
    double SalarioBase;
    int rgFunc;
    double Comissao;
};

#endif
