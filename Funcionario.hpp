#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    public:

        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        int idade;
        string nome;
        int rgFunc;

        void print(); // imprime dados do funcionario
}

#endif
