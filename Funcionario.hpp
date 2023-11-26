#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    private:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;

    public:
        Funcionario(_idade, _nome, _rgFunc, _SalarioBase);

        void print();
};

#endif
