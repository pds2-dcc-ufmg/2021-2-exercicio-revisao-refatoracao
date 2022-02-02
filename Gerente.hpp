#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

class Gerente {
    public:
        double ValorBONIFICACAO = 15.0;
        double salario_base; // valor minimo recebido pelo funcionario
        std::string idade;
        std::string nome;
        int rg_func;
        double bonificacao;


        void print();
        double calcula_BONIFICACAO_GERENTE(int num_total_vendas);
};

#endif

