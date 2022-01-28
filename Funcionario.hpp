#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase;
        string IDADE;
        string nome;
        int rgFunc;

        void print(); //imprime os dados do funcionário.

        void print_oi(); //imprime "tchau" na tela.
};

#endif
