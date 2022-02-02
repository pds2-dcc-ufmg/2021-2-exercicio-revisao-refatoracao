#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

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

        int getRgFunc();
        void setRgFunc( int rgFuncNovo);
};

#endif
