#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        string Idade;
        string Nome;
        int RG_Func;

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << Idade << endl
            << "  RGFunc: " << RG_Func << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
