#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        Funcionario(double _salarioBase, int _idade, string _nome, int _rg);
    
        double getSalarioBase();
        int getIdade();
        string getNome();
        int getRg();

        void setSalarioBase(double _salarioBase);
        void setIdade(int _idade);
        void setNome(string _nome);
        void setRg(int _rg);       

        void printDados();

    protected:
        double salarioBase; // valor minimo recebido pelo funcionario
        int idade;
        string nome;
        int rg;

};

#endif
