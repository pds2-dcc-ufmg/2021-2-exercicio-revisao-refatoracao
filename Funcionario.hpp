#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
  public:

    double _salario_base; 
    string _idade;
    string _nome;
    int _rg_func;

    void print();

};

#endif
