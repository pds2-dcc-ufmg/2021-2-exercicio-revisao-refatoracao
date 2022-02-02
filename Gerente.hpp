#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

double valorBonificacao = 15.0;

class Gerente : public Funcionario {

    public:

        double bonificacao;

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFuncionario << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }

        double calculaBonificacao(int totalVendas){
            double x;
            return totalVendas*valorBonificacao;
        }

};

#endif

