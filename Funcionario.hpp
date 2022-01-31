
#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>


class Funcionario {
public:
    Funcionario(
        const unsigned idade,
        const double salario_base,
        std::string nome,
        std::string rg);

    virtual void print() const;
    virtual void adicionar_bonus(const double valor) = 0;

    const std::string &get_nome() const;
    

protected:
    unsigned idade;
    unsigned num_atendimentos;
    double salario_base;
    double bonus_total;
    std::string nome;
    std::string rg;
};

#endif
