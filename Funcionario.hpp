#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {
    protected:
        double salarioBase; // valor mínimo recebido pelo funcionário
        string idade;
        string nome;
        string rgFunc;
    public:
        void print();
    
        double getSalarioBase();
        void setSalarioBase(double salarioBaseNovo);
    
        string getIdade();
        void setIdade(string idadeNovo);

        string getNome();
        void setNome(string nomeNovo);

        string getRgFunc();
        void setRgFunc(string rgFuncNovo);
};

#endif
