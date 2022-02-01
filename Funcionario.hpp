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

        void setName (std::string name);
        void setSalarioBase (double salarioBase);
        void setIdade (int idade);
        void setRgFunc (unsigned int rgFunc);
    

    protected:

        std::string nome;
        
        double salarioBase; // valor m�nimo recebido pelo funcion�rio

        int idade;
        unsigned int rgFunc;
};

#endif
