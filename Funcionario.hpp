#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "Pessoa.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario: public Pessoa {
    
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
            return this->salario_total;
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
            this->salario_total += valorAdicional;
        }

    protected:

        int rg;
        double salario; 
        double salario_total;
        string idade;
        
};

#endif
