#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario {
    public:

        Gerente(std::string nome, std::string idade, int rg_func, double salario_base);
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
        void set_bonificacao(double bonificacao);
        double get_bonificacao();
        void print(); //Imprime os dados do Gerente.

    private:

        double valor_bonificacao = 15.0;
        double bonificacao;

};

#endif

