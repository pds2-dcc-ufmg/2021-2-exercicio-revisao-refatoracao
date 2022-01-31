#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Funcionario {
    public:
       virtual void print();
    
       string get_nome();

    protected:
    
       double _salario_base;
    
       string _idade, _nome;
    
       int _rg_func;
};

#endif
