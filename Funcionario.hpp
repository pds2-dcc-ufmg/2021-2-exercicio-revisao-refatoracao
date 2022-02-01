#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
    string _nome;
    int _idade;

    protected:
    double _salario;
    int _rg;

    virtual double getSalarioTotal() = 0;
    virtual void getDados() const = 0;

};

#endif
