#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

const double taxa_de_bonificacao = 15.0;

class Gerente: public Funcionario {

    public:

        Gerente(){}
        
        Gerente(string nome, string idade, int rg, double salario_base){
            this->nome = nome;
            this->idade = idade;
            this->rg = rg;
            this->salario = salario_base;
            this->salario_total = salario_base;
        }

        void print() override {

            cout << "[Funcionario]" << endl
                << "[Gerente]"     << endl
                << "  Nome: "   << nome << endl
                << "  Idade: "  << idade << endl
                << "  RGFunc: " << rg << endl
                << "  SalarioBase: R$ " << fixed << setprecision(2) << salario << endl;
            cout << "Salario Total: " << salario_total << endl;
        }

        double getBonificacao(int totalVendas){
            return totalVendas*taxaBonificacao;
        }
        
};

#endif