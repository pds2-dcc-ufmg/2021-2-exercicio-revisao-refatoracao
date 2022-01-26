#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario{

    protected:

        std::string Nome;
        int Idade;
        double SalarioBase = 0; // valor m�nimo recebido pelo funcion�rio
        int RGFunc;

    public:

        virtual void print();

        virtual double calculaSalarioTotal();
        
        double getSalarioBase();

        std::string getNome();      

};

#endif
