#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <string>

const double Valor_Bonificacao = 15.0;

class Gerente {
    public:
        double SalarioBase;
        std::string IDADE;
        std::string nome;
        int rgFunc;
        double bonificacao;


        void print();

        double calcula_BONIFICACAO_GERENTE(int Total_Vendas);
};

#endif
