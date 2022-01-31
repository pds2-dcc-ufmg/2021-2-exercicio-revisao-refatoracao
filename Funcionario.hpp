//NOTA DE ALTERAÇÕES
//Remoção de método desnecessário print_oi();
//Variáveis IDADE e SalarioBase trocadas para corresponder padrão de nomeclatura

#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double salarioBase; // valor mínimo recebido pelo funcionário
        string idade;
        string nome;
        int rgFunc;

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl;
        }
};

#endif
