#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario : public Pessoa {
    private:
        double salarioBase;
        int rgFunc;

    public:
        void imprimirDados() override {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl;
        }

        void setSalarioBase(double novoSalario){
            salarioBase = novoSalario;
        }

        void setRgFunc(int novoRG){
            rgFunc = novoRG;
        }
};

#endif