#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{
public:
    double salarioBase; // valor m�nimo recebido pelo funcion�rio
    string idade;
    string nome;
    int rgFunc;

    void print();

    void print_tchau();
};

#endif
