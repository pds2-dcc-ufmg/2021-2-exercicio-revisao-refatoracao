#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa {

    public:
        string getIdade(){
            return this->idade;
        }

        int getRg(){
            return this->rg;
        }

        double getSalario(){
            return this->salario;
        }

        double getSalarioTotal(){
            return this->salarioTotal;
        }

        void setIdade(string idade){
            this->idade = idade;
        }

        void setRg(int rg){
            this->rg = rg;
        }

        void setSalario(double salario){
            this->salario = salario;
        }

        void setSalarioTotal(double valorAdicional){
            this->salarioTotal += valorAdicional;
        }

    protected:
        string idade;
        int rg;
        double salario; 
        double salarioTotal;
};

#endif
