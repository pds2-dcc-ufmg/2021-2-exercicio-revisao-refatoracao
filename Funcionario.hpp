#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
public:
    double salarioBase; // valor mínimo recebido pelo funcionário
    std::string idade;
    std::string nome;
    int rgFunc;

    virtual void print(); // tornando a função virtual para suportar polimorfismo
    virtual double getSalarioTotal(); // adicionando um método para obter o salário total
};

#endif
