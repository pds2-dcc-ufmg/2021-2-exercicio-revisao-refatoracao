#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        string IDADE;
        string nome;
        int rgFunc;

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
