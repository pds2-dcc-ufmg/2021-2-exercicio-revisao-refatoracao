#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    private:
        string _nome;
        int _idade;
        int _rgFunc;
        double _salarioBase;

    public:
        virtual void print ();
        Funcionario(const string& nome, int idade, int rgFunc, double salarioBase);
        // void setFuncionario(const string& nome, int idade, int rgFunc, double salarioBase);
        string getNome();
        int getIdade();
        int getRgFunc();
        double getSalarioBase();
};

#endif