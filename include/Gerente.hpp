#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

const double VALOR_BONIFICACAO = 15.0;

class Gerente : public Funcionario {
    public:
        double _bonificacao = 0;

        Gerente(std::string nome, int idade, std::string rg_func, double salario_base): Funcionario(nome, idade, rg_func, salario_base){};

        void imprimir_dados() override;

        void calcular_bonificacao(int num_total_vendas);

        void calcular_salario_total() override;
};

#endif

