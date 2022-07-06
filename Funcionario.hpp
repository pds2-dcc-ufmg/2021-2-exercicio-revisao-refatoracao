#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    
    public:

    Funcionario(string nome, int idade, int rg, double salarioBase);

    void print();

    string getNome();

    double getSalario();

    private:

    int _rg;
    int _idade;
    string _nome;
    double _salarioBase;


};

#endif
