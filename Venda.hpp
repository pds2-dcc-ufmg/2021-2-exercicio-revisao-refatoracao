
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"


class Venda {
public:
    Venda(
        const Cliente &cliente,
        const Funcionario &funcionario,
        std::string descicao,
        const double valor);
    
    void print() const;

private:
    const Cliente &cliente;
    const Funcionario &funcionario;
    std::string descricao;
    double valor;
};

#endif
