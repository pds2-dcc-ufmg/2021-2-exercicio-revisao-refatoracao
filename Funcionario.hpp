#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        string Idade;
        string Nome;
        int RgFunc;

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << Idade << endl
            << "  RGFunc: " << RgFunc << endl;
        }

        void print_oi(){
            cout << "Oi!" << endl;
        }
};

#endif
