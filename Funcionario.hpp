#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;

        Funcionario(string _nome, string _idade, double _rgFunc, double _salarioBase):
		nome(_nome), idade(_idade), rgFunc(_rgFunc), salarioBase(_salarioBase)
		{}

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl;
        }
};

#endif
