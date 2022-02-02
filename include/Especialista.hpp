#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

const double PERCENTUAL_COMISSAO = 0.1;

class Especialista : public Funcionario {
    protected:
        std::string _especialidade;
        int _num_atendimentos = 0;
        double _comissao = 0;
        void calcular_salario_total() override;

    public:
             Especialista(std::string nome, int idade, std::string rg_func, double salario_base, std::string especialidade) : Funcionario(nome, idade, rg_func, salario_base){
            this->_especialidade = especialidade;
        };
        void imprimir_dados() override;
        void calcular_comissao(double valor_venda);
        std::string get_nome();
        int get_num_atendimentos();
        void inc_num_atendimentos();
};

#endif
