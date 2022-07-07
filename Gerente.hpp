#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        string IDADE;
        string nome;
        int rgFunc;
        double bonificacao;


        void print() {
            cout << "[Funcionario]" << endl;
            cout << "[Gerente]" << endl;
            cout << "  Nome: " << nome << endl;
            cout << "  Idade: " << IDADE << endl;
            cout << "  RGFunc: " << rgFunc << endl;
            cout << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*(15.0);
        }
};

#endif

