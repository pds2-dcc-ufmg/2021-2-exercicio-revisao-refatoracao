#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{
protected:
    /**
     * \brief Consiste no salário minimo
     * recebido pelo funcionário
     */
    double salarioBase;
    int idade;
    string nome;
    /**
     * \brief Número do RG do funcionário
     */
    int rgFunc;

public:
    Funcionario(double salarioBase, int idade, string nome, int rgFunc);

    double getSalarioBase();
    string getNome();
    int getIdade();
    int getRgFunc();
    virtual void print();
};

#endif
