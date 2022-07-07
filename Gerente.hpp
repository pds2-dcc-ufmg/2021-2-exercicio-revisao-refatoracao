#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Gerente {
    public:
        double salario_base; // valor minimo recebido pelo funcionario
        std::string idade;
        std::string nome;
        int rg_funcionario;
        double bonificacao;

        void print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
};

#endif