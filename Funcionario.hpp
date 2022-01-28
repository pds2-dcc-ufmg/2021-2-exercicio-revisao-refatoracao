#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario : public Pessoa {
    public:
        
        double getSalarioBase();
        string getIdade();
        string getNome();
        int getRG();

        void setSalarioBase(double salarioBase);
        void setIdade(string idade);
        void setNome(string nome);
        void setRG(int rg);

        void print() override;
        void print_tchau();

    private:

        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;
};

#endif
