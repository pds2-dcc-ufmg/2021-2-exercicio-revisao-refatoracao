#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    protected:
        double salarioBase; // valor mínimo recebido pelo funcionário
        string idade;
        string nome;
        string rgFunc;
    public:
        void print() {
            cout << "[Funcionario]" << endl
             cout << "[Funcionario]" << endl
            << "  Nome: " << this->nome << endl
            << "  Salario Base: R$ " << this->salarioBase << endl;
            << "  Idade: " << this->idade << endl
            << "  RGFunc: " << this->rgFunc << endl;
        }
};

#endif
