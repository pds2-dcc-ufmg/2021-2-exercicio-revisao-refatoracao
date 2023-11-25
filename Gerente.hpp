#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valor_bonificacao = 15.0;

class Gerente : public Funcionario {
    
    double bonificacao;

    public:
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << get_nome() << endl
            << "  Idade: " << get_idade << endl
            << "  RGFunc: " << get_rgfunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << get_salariobase <<endl;
        }

        double get_bonificacao(){
            return bonificacao;
        }

        void set_bonificacao(double i){
            bonificacao = i;
        }

        double calcula_BONIFICACAO_GERENTE(int num_total_vendas){
            return num_total_vendas*valor_bonificacao;
        }

};

#endif

