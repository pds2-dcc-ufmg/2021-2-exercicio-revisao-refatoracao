#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa{

    public:

        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        int rgFunc;

        void print() const override;
};

#endif
