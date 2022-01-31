#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario : public Pessoa {
    public:
        double salarioBase;
        int rgFunc;

        void imprimirDados() override {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }
};

#endif