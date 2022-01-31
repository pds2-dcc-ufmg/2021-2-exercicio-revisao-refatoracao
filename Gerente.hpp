#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

const double taxaBonificacao = 15.0;

class Gerente : public Funcionario {
    public:
        Gerente(){}
        Gerente(string nome, string idade, int rg, double salarioBase){
            this->nome = nome;
            this->idade = idade;
            this->rg = rg;
            this->salario = salarioBase;
            this->salarioTotal = salarioBase;
        }

        void print() override {
            cout << "[Funcionario]" << endl
                 << "[Gerente]"     << endl
                 << "  Nome: "   << nome << endl
                 << "  Idade: "  << idade << endl
                 << "  RGFunc: " << rg << endl
                 << "  SalarioBase: R$ " << fixed << setprecision(2) << salario << endl;
            cout << "Salario Total: " << salarioTotal << endl;
        }

        double getBonificacao(int totalVendas){
            return totalVendas*taxaBonificacao;
        }
};

#endif

