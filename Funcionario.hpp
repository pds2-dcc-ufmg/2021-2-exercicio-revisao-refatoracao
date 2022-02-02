#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {
    public:
    
        virtual void print();
        std::string getNome();
        int getIdade();
        int getRgFunc();
        double getSalario();

    protected:

        double _SalarioBase; // valor m�nimo recebido pelo funcion�rio
        int _idade;
        std::string _nome;
        int _rgFunc;

};

#endif
