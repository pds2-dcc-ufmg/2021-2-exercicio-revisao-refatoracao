#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    private:

        double SalarioBase; // valor mínimo recebido pelo funcionário
        std::string idade;
        std::string nome;
        int rgFunc;

    public:    
        void print(); // imprime dados do funcionario
}

#endif
