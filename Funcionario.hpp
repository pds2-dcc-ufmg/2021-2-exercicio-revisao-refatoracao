#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>

using namespace std;
class Funcionario {
    public:
        double salarioBase; // valor minimo recebido pelo funcionirio
        string idade;
        string nome;
        int rgFunc;

        Funcionario () {};
        Funcionario(double salarioBase, string nome, string idade, int rgFunc); 
        void printFuncionario();
};

#endif