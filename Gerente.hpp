#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double VALORBONIFICACAO = 15.0;

class Gerente {
    public:
        double salarioBase; // valor minimo recebido pelo funcionario
        string idade;
        string nome;
        int rgFunc;
        double bonificacao;

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  salarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*VALORBONIFICACAO;
        }

};

#endif


