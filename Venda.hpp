#ifndef VENDA_HPP
#define VENDA_HPP

#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda {
public:
    double VALOR;
    std::string descricao;
    Especialista esp;
    std::string cliente;

    void print();
};

#endif
