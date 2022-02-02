#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        int idade;
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
        
        Funcionario() {}
        Funcionario(double salarioBase, int idade, string nome, int rgFunc)
        : salarioBase(salarioBase), idade(idade), nome(nome), rgFunc(rgFunc)
    	{}
};

#endif
