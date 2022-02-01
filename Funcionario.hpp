#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    protected:
        double salarioBase; // valor minimo recebido pelo funcionario
        string idade;
        string nome;
        int rgFunc;

    public:
        Funcionario(string argNome, string argIdade, int argRg, double argSalario):
        nome(argNome), idade(argIdade), rgFunc(argRg), salarioBase(argSalario) {}
        Funcionario(){}
        virtual void print();
        double getSalarioBase();
        string getIdade();
        string getNome();
        int getRg();
};

#endif
