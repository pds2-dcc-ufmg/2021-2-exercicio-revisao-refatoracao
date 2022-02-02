#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:

        void set_salario_base(double);
        double get_salario_base();
        void set_nome(std::string);
        std::string get_nome();
        void set_idade(std::string);
        std::string get_idade();
        void set_rg_func(int);
        int get_rg_func();

    private:

        double salario_base; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rg_func;
};

#endif
