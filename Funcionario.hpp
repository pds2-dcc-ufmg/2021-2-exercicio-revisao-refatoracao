#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {

    public:

        virtual void print();

        virtual void printOi();

        virtual std::string getName();
    

    private:

        double salarioBase; // valor m�nimo recebido pelo funcion�rio

        std::string idade;

        std::string nome;

        int rgFunc;
};

#endif
