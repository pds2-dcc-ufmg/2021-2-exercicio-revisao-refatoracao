#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>



class Funcionario {
    public:

       Funcionario(std::string nome, std::string idade, double salario_base, int rg_func);
       ~Funcionario(){};
        void print() const;
        std::string get_nome() const;
        double get_salario_base() const;

    protected:
        std::string _nome;
        std::string _idade;
        double _salario_base; // valor mínimo recebido pelo funcionário;
        int _rg_func;



        
};

#endif
