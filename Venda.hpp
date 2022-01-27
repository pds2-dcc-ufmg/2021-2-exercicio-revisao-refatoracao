#ifndef VENDA_H
#define VENDA_H

#include <string>
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:
        Venda(Cliente& cliente, Especialista& esp, std::string descricao, double valor);
        void print();

    private:
        double _valor;
        std::string _descricao;
        std::string _esp;
        std::string _cliente;
};

#endif
