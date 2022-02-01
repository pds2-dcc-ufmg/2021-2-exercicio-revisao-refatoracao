#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <list>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        Funcionario(double salarioBase, string idade, string nome, int rg) : _salarioBase(salarioBase), _idade(idade), _nome(nome), _rg(rg) {};
        void print();
        double _salarioBase;
        string _idade;
        string _nome;
        int _rg;
        string _tipo;

};

#endif
