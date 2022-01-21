#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario: public Pessoa {
    protected:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string IDADE;
        int rgFunc;
    public:
    Funcionario(){}
    Funcionario(string nome, string idade,int rg, double SB):Pessoa(nome){
        this->SalarioBase=SB;
        this->IDADE=idade;
        this->rgFunc=rg;
        }
    string getNome(){
        return nome;
    }
    double getSB(){
        return SalarioBase;
    }
    string getIdade(){
        return IDADE;
    }
    int getRg(){
        return rgFunc;
    }

        virtual void print()=0;


};

#endif
