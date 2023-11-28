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
    int rgFuncionario;
    void print() {
        cout << "[Funcionario]" << endl
        << "  Idade: " << IDADE << endl
        << "  RGFuncionario: " << rgFuncionario << endl;
    }
};

#endif
