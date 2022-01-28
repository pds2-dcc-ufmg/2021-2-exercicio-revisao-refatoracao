#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {

    public:
        
        double getSalarioBase();
        string getIdade();
        string getNome();
        int getRG();

        void setSalarioBase(double salarioBase);
        void setIdade(string idade);
        void setNome(string nome);
        void setRG(int rg);

        void print();
        void print_tchau();

        Funcionario(double salarioBase = 0, string idade = "", string nome = "", int rgFunc = 0);

    private:

        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;
};

#endif
