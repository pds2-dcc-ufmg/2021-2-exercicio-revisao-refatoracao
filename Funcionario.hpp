#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    
    public:
        double salarioBase; // valor minimo recebido pelo funcionario
        int idade;
        string nome;
        int rgFunc;

        virtual void imprimeFuncionario() {};

};

#endif
