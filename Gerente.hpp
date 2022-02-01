#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valorBonificacao = 15.0;

class Gerente : public Funcionario{
    public:
        double bonificacao;

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rg << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }

        double GetBonificacaoGerente(int numTotalVendas){
            return numTotalVendas*valorBonificacao;
        }

};

#endif

