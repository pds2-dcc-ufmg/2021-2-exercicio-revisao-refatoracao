#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
    public:
        double VALOR;
        string descricao;
        Especialista esp;
        string cliente;

        void print();
};
#endif