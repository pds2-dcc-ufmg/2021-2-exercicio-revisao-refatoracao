
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:
        Venda(double VALOR, std::string descricao, Especialista esp, Cliente cliente);
        double getValor() const;
        std::string getDescricao() const;
        void print() const;

    private:
        double VALOR;
        std::string descricao;
        Especialista esp;
        Cliente cliente;
};

#endif
