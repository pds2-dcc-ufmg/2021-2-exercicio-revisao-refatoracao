#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    protected:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        int IDADE;
        string nome;
        int rgFunc;
    
    public:

        double getSalarioBase(){ return SalarioBase;}
        void setSalarioBase(double newSalarioBase)
        {
            this->SalarioBase = newSalarioBase;
        }

        int getIdade(){ return IDADE;}
        void setIdade(int newIdade)
        {
            this->IDADE = newIdade;
        }

        string getNome(){return nome;}
        void setNome(string newNome)
        {
            this->nome = newNome;
        }

        int getRgFunc(){ return rgFunc;}
        void setRgFunc( int newRgFunc)
        {
            this->rgFunc = newRgFunc;
        }




        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }

};

#endif
