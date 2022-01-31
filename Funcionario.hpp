#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {

    public:

        virtual void print();

        virtual void print_oi();
    

    private:

        double SalarioBase; // valor m�nimo recebido pelo funcion�rio

        std::string IDADE;

        std::string nome;

        int rgFunc;
};

#endif
