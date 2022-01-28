#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

class Funcionario {

    public:

        //Funcionario(std::string nome, int rgFuncionario, int idade, double salarioBase);
        void setNome(std::string nome);
        void setRgFuncionario(int rgFuncionario);
        void setIdade(int idade);
        void setSalarioBase(double salarioBase);
        std::string getNome();
        int getRgFuncionario();
        int getIdade();
        double getSalarioBase();
        virtual void print() const = 0;

    protected:

        std::string nome;
        int rgFuncionario;
        int idade;
        double salarioBase; // valor mínimo recebido pelo funcionário      

};

#endif
