#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

double VALORBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    public:
        // double salarioBase; // valor m�nimo recebido pelo funcion�rio
        // string idade;
        // string nome;
        // int rgFunc;
        double bonificacao;

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
            cout << "Salario Total: " << salarioBase + bonificacao <<endl;
        }

        Gerente() {}
        Gerente(double salarioBase, int idade, string nome, int rgFunc, double bonificacao)
            : bonificacao(bonificacao), Funcionario(salarioBase, idade, nome, rgFunc)
    	{}

        void calcula_bonificacao_gerente(int numTotalVendas){
            Gerente::bonificacao = numTotalVendas*VALORBONIFICACAO;
        }

};

#endif

