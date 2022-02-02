#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{
public:
    double valor;
    std::string descricao;
    Especialista esp;
    Cliente cliente;

    Venda(Cliente cliente1, Especialista esp1, std::string descricao1, double valor1);

    void print();
};

#endif
