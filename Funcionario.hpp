#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {

    public:

        void print();

        void printOi();

        std::string getName();

        double getSalarioBase ();

        int getIdade ();

        unsigned int getRgFunc ();
    

    protected:

        std::string nome;
        
        double salarioBase; // valor m�nimo recebido pelo funcion�rio

        int idade;
        unsigned int rgFunc;
};

#endif
