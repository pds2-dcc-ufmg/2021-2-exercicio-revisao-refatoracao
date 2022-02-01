#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {

    public:

        Funcionario ();

        void print();
        void printOi();

        std::string getName();
        double getSalarioBase ();
        int getIdade ();
        std::string getRgFunc ();

        void setName (std::string name);
        void setSalarioBase (double salarioBase);
        void setIdade (int idade);
        void setRgFunc (std::string RgFunc);
    

    protected:

        std::string nome;
        
        double salarioBase; // valor m�nimo recebido pelo funcion�rio

        int idade;
        std::string rgFunc;
};

#endif
