#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        string Idade;
        string Nome;
        int RgFunc;
        double Bonificacao;


        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << Nome << endl
            << "  Idade: " << Idade << endl
            << "  RGFunc: " << RgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }
};

#endif

