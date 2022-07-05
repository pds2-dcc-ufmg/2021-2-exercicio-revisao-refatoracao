#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        Funcionario(double SalarioBase, 
                    string IDADE,
                    string Nome,
                    int rgFunc) : salarioBase_(SalarioBase),
                                   idade_(IDADE),
                                   nome_(Nome),
                                   rgFunc_(rgFunc) {};

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade_ << endl
            << "  RGFunc: " << rgFunc_ << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
        //Getters
        string getNome () {return nome_;};
        double getSalarioBase () {return salarioBase_;};
        
    protected:
        double salarioBase_; // valor m�nimo recebido pelo funcion�rio
        string idade_;
        string nome_;
        int rgFunc_;
};

#endif
