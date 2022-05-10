#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Funcionario {
    
    protected:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        int idade;
        std::string nome;
        int rg;

    public:
        
        virtual void print() const = 0;


};

#endif
