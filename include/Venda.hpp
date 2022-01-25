#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
    double VALOR;
    string descricao;
    Especialista esp;
    string cliente;
    void print();
};

#endif
