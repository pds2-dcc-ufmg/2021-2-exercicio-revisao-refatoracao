#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
protected:
    std::string nome;
    std::string idade;
    double salarioMinimo;
    int rgFunc;

    static double perc;
    static double percWanda;
    static double valorBonificacao;

public:
    virtual void imprimirDados();

    std::string getNome() { return nome; }
    virtual double getSalarioMinimo() { return salarioMinimo; }
};

#endif