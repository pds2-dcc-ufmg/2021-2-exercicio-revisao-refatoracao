#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valor_bonificacao = 15.0;

class Gerente {
    public:
        double salario_base; // valor mínimo recebido pelo funcionário
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
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*valor_bonificacao;
        }

};

#endif

