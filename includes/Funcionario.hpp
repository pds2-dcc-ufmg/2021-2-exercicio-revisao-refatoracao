#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
public:
    virtual void print();
    Funcionario(){};
    std::string getName();

    virtual ~Funcionario();

protected:
    double salarioBase;  // valor minimo recebido pelo funcionario
    double salarioFinal; // valor que será recebido pelo funcionario
    int idade;
    std::string nome;
    std::string rgFuncionario; // documento de identidade do funcionario
};

#endif
