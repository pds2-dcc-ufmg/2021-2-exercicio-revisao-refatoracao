#ifndef VENDA_H
#define VENDA_H

#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda {
    public:
        Venda(Cliente* _cliente,
            Especialista* _especialista,
            std::string _descricao,
            double _valor);
    
    public:
        Cliente* cliente;
        Especialista* especialista;
        std::string descricao;
        double valor;

        void print();
};

#endif
