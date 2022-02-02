#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

const double PERCENTUAL_COMISSAO = 0.1;

class Especialista : public Funcionario {
    public:
        std::string _especialidade;
        int _num_atendimentos = 0;
        double _comissao = 0;

        Especialista(std::string nome, int idade, std::string rg_func, double salario_base, std::string especialidade) : Funcionario(nome, idade, rg_func, salario_base){
            this->_especialidade = especialidade;
};

        void calcular_comissao(double ValorVenda);

        void imprimir_dados() override;
        void calcular_salario_total() override;
};

#endif
