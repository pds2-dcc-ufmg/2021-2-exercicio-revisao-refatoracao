#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    protected:
        double _SalarioBase; // valor mínimo recebido pelo funcionário
        string _IDADE;
        string _nome;
        int _rgFunc;
    public:
        Funcionario(string nome, string IDADE, int rgFunc, double SalarioBase):
        _SalarioBase(SalarioBase), _IDADE(IDADE), _nome(nome), _rgFunc(rgFunc) {}
        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << _IDADE << endl
            << "  RGFunc: " << _rgFunc << endl;
        }

        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
