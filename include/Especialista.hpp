#ifndef Especialista_H
#define Especialista_H

#include "Funcionario.hpp"

class Especialista : public Funcionario {
    public:
        Especialista(std::string nome, double salario_base, int idade, int rg_funcionario, std::string especialidade, double percentual = 0.1);
        
        void imprime_dados() const override;
        void realiza_venda(double valor_venda);
        int getNumAtendimentos();

    private:
        std::string _especialidade;
        int _num_atendimentos = 0;
        double _comissao = 0;
        double _percentual;

        void calcula_comissao(double valor_venda);
};

#endif
