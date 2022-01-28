#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <iomanip>
#include <string>

class Funcionario {
    public:
        virtual void imprime_dados() const = 0;

        void setNome(std::string nome);
        void setSalarioBase(double salario_base);
        void setIdade(int idade);
        void setRgFuncionario(int rg_funcionario);

        std::string getNome();
        double getSalarioBase();
        int getIdade();
        int getRgFuncionario();

    protected:
        std::string _nome;
        double _salario_base;
        int _idade, _rg_funcionario;
};

#endif
