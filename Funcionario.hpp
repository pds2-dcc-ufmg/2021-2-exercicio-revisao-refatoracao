#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        int idade, registro;
        string nome;

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << registro << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
