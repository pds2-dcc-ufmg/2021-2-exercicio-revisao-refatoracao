#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


class Gerente {
    public:

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas * VALOR_BONIFICACAO;
        }


    private:

        const double VALOR_BONIFICACAO = 15.0;
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        double bonificacao;

        int rgFunc;

        string idade;
        string nome;
};

#endif

