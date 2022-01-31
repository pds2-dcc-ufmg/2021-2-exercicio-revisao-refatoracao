#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente : public Funcionario {
    valorBonificacao = 15.0;
    public:
        void imprimirDados() override {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            Funcionario::imprimirDados();
        }
};

#endif