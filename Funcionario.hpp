#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
public:
    void setSalarioBase(double);
    double getSalarioBase();
    void setIdade(int);
    int getIdade();
    void setNome(std::string);
    std::string getNome();
    void setRgFunc(int);
    int getRgFunc();

    void print();

protected:
    double _SalarioBase;
    int _idade;
    std::string _nome;
    int _rgFunc;
};

#endif
