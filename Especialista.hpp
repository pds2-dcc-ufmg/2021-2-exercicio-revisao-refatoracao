
#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"


class Especialista : public Funcionario {
public:
    Especialista(
        const unsigned idade,
        const double salario_base,
        std::string nome,
        std::string rg_func,
        std::string especialidade);
    
    void adicionar_bonus(const double valor_venda) override;
    void print() const override;

private:
    static double calcular_comissao(const double valor_venda);
    
    std::string especialidade;
};

#endif
