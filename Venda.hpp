#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
    public:
    double VALOR;
    std::string descricao, cliente;
    Especialista esp;

    void print(){
        std::cout << "Especialista: " << esp.nome;
        std::cout << " Cliente: " << cliente;
    }
};

#endif
