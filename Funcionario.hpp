#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
public:
    double salarioBase; // Valor mínimo recebido pelo funcionário
    string idade;
    string nome;
    int rgFunc;

    void print() {
        cout << "[Funcionario]" << endl
             << "  Nome: " << nome << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rgFunc << endl
             << "  Salário Base: R$ " << fixed << setprecision(2) << salarioBase << endl;
    }

    void print_oi() {
        cout << "Tchau" << endl;
    }
};

#endif
