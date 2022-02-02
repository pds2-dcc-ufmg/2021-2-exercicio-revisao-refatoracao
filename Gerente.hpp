#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valor_bonificacao = 15.0;

class Gerente{
    public:
        double salario_base; // valor minimo recebido pelo funcionario
        string idade;
        string nome;
        int rg_func;
        double bonificacao;

        void print(){
            cout << "[Funcionario]" << endl;
            cout << "[Gerente]" << endl;
            cout << "  Nome: " << nome << endl;
            cout << "  Idade: " << idade << endl;
            cout << "  RGFunc: " << rg_func << endl;
            cout << "  salarioBase: R$ " << fixed << setprecision(2) << salario_base << endl;
        }

        double calcula_bonificacao_gerente(int num_total_vendas){
            double x;
            return num_total_vendas*valor_bonificacao;
        }

};

#endif

/**
----Alterações:----
1.Padronização(ou formatação) dos nomes das variáveis
2.Identação melhor das linhas do código
3.Padronização(ou formatação) do nome da função "calcula_BONIFICACAO_GERENTE"
**/

