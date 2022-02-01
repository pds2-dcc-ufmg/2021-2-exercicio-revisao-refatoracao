#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        /**
        *@brief Imprime informações do funcionário (nome, idade e rg)
        */
        virtual void print();
    
    private:
        /**
        *@brief Valor mínimo recebido pelo funcionário    
        */
        double salarioBase;
        /**
        *@brief Dados do funcionário
        */
        string idade;
        string nome;
        int rgFunc;
};

#endif
