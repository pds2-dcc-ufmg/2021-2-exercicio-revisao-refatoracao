#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        Funcionario (double salarioBase, string idade, string nome, int rg) : _salarioBase(salarioBase), _idade(idade), _nome(nome), _rg(rg) {};
        double _salarioBase; // valor m�nimo recebido pelo funcion�rio
        string _idade;
        string _nome;
        int _rg;

        void print();

};

#endif
