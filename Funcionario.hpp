#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario: public Pessoa {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string IDADE;
        int rgFunc;

        virtual void print()=0;


};

#endif
