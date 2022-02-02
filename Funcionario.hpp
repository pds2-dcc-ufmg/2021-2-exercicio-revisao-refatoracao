#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Funcionario {
    public:

    void print();

    string nome;
    string IDADE;
    int rgFunc;
    double SalarioBase; // valor m�nimo recebido pelo funcion�rio

};

#endif
