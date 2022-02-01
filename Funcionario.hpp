#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:

        //conjunto de getters
        string getNome();
        string getIdade();
        int getRg();
        double getSalarioBase();

        //conjunto de setters
        void setNome(string nome);
        void setIdade(string idade);
        void setRg(int rg_funcionario);
        void setSalarioBase(double salario_base);

        void print();


    private:

        double salario_base = 0; // valor mínimo recebido pelo funcionário
        string idade;
        string nome;
        int rg_funcionario;
};

#endif
