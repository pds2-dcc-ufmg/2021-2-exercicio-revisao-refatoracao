#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
