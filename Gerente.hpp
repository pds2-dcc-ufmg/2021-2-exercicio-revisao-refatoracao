
#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"


class Gerente : public Funcionario {
public:
    Gerente(
        const unsigned idade,
        const double salario_base,
        std::string nome,
        std::string rg_func);
    
    void print() const override;
    void adicionar_bonus(const double valor_venda) override;

private:

    static constexpr double valor_bonificacao = 15;
};

#endif
