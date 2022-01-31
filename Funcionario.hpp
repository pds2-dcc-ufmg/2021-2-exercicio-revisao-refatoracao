#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Funcionario {
    public:
        virtual ~Funcionario();

        void setSalarioBase(double salario);
        double getSalarioBase();

        void setNome(string nome);
        string getNome();

        void setIdade(string idade);
        string getIdade();

        void setRg(string rg);
        string getRg();

        virtual void print(); // Imprime na tela os dados do funcionário

    protected:
        double SalarioBase;
        string Nome;
        string Idade;
        string Rg;
};

#endif
