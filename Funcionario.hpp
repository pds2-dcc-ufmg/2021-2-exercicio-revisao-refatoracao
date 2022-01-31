#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {

    public:

        virtual void print();

        virtual void printOi();

        virtual std::string getName();
    

    protected:

        std::string nome;
        
        double salarioBase; // valor m�nimo recebido pelo funcion�rio

        int idade;
        int rgFunc;
};

#endif
