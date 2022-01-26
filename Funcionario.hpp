#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }

        double getSalarioBase(){
            return this->SalarioBase; 
        }

        void setSalarioBase(double SalarioBase){
            this->SalarioBase = SalarioBase; 
        }

        string getIdade(){
            return this->IDADE; 
        }

        void setIdade(string idade){
            this->IDADE = idade; 
        }

        string getNome(){
            return this->nome; 
        }

        void setNome(string nome){
            this->nome = nome; 
        }

        int getRgfunc(){
            return this->rgFunc; 
        }

        void setRgfunc(int rgFunc){
            this->rgFunc = rgFunc; 
        }

        private:
            double SalarioBase; // valor m�nimo recebido pelo funcion�rio
            string IDADE;
            string nome;
            int rgFunc;
};

#endif
