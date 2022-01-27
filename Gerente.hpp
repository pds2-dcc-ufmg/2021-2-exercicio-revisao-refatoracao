#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

const double VALOR_BONIFICACAO = 15.0;

class Gerente {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        string idade;
        string nome;
        int rgFunc;
        double bonificacao; //porcentagem de bonificacao


        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

        double calculaBonificacaoGerente(int numTotalVendas){
            double x;
            return numTotalVendas*VALOR_BONIFICACAO;
        }

};

#endif

