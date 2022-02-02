#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include <iostream>
#include <vector>

class Venda{
    public:
        Venda(std::string cliente, Especialista esp, std::string descricao, double valor);
        double valor;
        std::string descricao;
        Especialista esp;
        std::string cliente;
        void Imprimir();

    void print();
};

#endif