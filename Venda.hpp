#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"

class Venda{

    public:
    double VALOR;
    string descricao;
    Especialista esp;
    string cliente;

    void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }
};

#endif
