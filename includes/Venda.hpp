#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{

public:
    void print();
    Venda(double valor, std::string descricao, Especialista* especialista, std::string cliente);

private:
    double valor;
    std::string descricao;
    Especialista *especialista;
    std::string cliente;
};

#endif
