#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
class Gerente {
    public:
        double salario_base; // valor minimo recebido pelo Funcionario
        string nome;
        int IDADE;
        int rgFunc;
        double bonificacao;
        void print();//imprime o nome, idade, RG e salario minimo do Gerente 
        double calcula_bonificacao_gerente(int num_total_vendas);//retorna a bonificacao do Gerente
};


