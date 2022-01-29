#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario{

    public:
        double salarioBase;
        std::string idade, nome;
        int rgFunc;

        Funcionario(double salarioBase, std::string idade, std::string nome, int rgFunc);

        virtual ~Funcionario();

        Funcionario();

        virtual void print();

};

//Funcionario agora é uma classe abstrata, base para as outras e print é um metodo virtual, além da declaração dos construtores.
#endif
