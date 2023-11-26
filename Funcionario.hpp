#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{

public:

    string nome;
    string idade;
    int rgFunc;
    double salarioBase; // valor minimo recebido pelo funcionario
    
    Funcionario(string _nome, string _idade, int _rgFunc, double _salarioBase) : nome(_nome), idade(_idade), rgFunc(_rgFunc), salarioBase(_salarioBase)  {};

    void print()
    {
        cout << "[Funcionario]" << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rgFunc << endl;
    }
};

#endif
