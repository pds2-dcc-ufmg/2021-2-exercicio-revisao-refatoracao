
#ifndef VENDA_HPP
#define VENDA_HPP


#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda {

    private: 
        double valor;
        std::string descricao;
        Especialista* especialista;
        Cliente* cliente;

    public:
        
        Venda(Cliente *_cliente, Especialista *_especialista, std::string _descricao, double _valor);
        void print() const;

};

#endif
