#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase;
        int idade, registro;
        string nome;
        Funcionario(string, int, int, double);
        Funcionario();

        void print();

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
