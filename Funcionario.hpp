#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{
public:
    void setSalarioBase(double);
    double getSalarioBase();
    void setIdade(int);
    int getIdade();
    void setNome(string);
    string getNome();
    void setRgFunc(int);
    int getRgFunc();
    void print();

private:
    double _salario_base;
    int _idade;
    string _nome;
    int _rg_func;
};

#endif
