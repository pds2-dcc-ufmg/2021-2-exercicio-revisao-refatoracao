#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double _SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string _IDADE;
        string _nome;
        int _rgFunc;

        Funcionario(double salarioBase,string Idade, string nome, int rgFunc);
        Funcionario() = default;
        void print() ;
        void print_oi();
};

#endif
