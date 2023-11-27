#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
public:
    double salarioBase; 
    std::string idade;
    std::string nome;
    int rgFunc;

    void print();
};

#endif
