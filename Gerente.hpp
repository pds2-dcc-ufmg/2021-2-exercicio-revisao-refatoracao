#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Gerente {
    public:
        Gerente(std::string nome, std::string idade, int rg_func, double salario_base);
        const double valor_bonificacao = 15.0;
        double salario_base; 
        double bonificacao;
        std::string idade;
        std::string nome;
        int rg_func;

        void print();
        double calcula_bonificacao_gerente(int num_total_vendas);
};

#endif
