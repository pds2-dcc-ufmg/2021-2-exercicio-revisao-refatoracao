#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:

        Venda(double valor, std::string descricao, Especialista* esp, std::string cliente): valor(valor), descricao(descricao), esp(esp), cliente(cliente) {
            esp->AtendeuCliente();
            esp->Comissao(valor);
            numVendas++;
        }
        static int GetNumVendas() { return numVendas; }
        std::string GetDescricao () const { return descricao; }
        void print() const;

    private:

        double valor;
        std::string descricao;
        Especialista* esp;
        std::string cliente;
        static int numVendas;
};

#endif
