
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Venda{

    public:
    double VALOR;
    std::string descricao;
    Especialista esp;
    std::string cliente;


    void print();

};

#endif
