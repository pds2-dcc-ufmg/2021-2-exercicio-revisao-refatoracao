#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"

class Gerente : public Funcionario {
    public:
        Gerente(std::string nome, double salario_base, int idade, int rg_funcionario);
        
        void imprime_dados() const override;
        void calcula_bonificacao(int total_vendas);

    private:
        const double _BONIFICACAO = 15.0;
        double _valor_bonificacao = 0;
};

#endif

