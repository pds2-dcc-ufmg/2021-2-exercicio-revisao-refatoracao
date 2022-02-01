#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

// Adicionar mais dois cout's para diminuir a interdepêndencia do código
// Colocar as variáveis como private

using namespace std;

class Funcionario {
    public:
        double salario_base; 
        string idade;
        string nome;
        int rg_func;
    
    public:
        void print() {
            cout << "[Funcionario]" << endl;
            cout << "  Idade: " << idade << endl;
            cout << "  RGFunc: " << rg_func << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
