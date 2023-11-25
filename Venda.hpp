#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"
#include <iostream>

class Venda {
public:
    double valor;
    std::string descricao;
    Especialista especialista;
    std::string cliente;

    void print() const;
};

#endif
