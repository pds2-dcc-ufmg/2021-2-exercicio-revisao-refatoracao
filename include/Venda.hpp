
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
private:
    double valor;
    std::string descricao;
    Especialista especialista;
    Cliente cliente;

public:
    Venda();
    Venda(double valor, std::string descricao, Especialista &especialista, Cliente &cliente);

    void print();
};

#endif
