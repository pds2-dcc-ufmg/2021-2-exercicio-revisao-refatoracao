#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
    public:
        double valor;
        string descricao;
        Especialista *esp;
        string nomeCliente;

        void print();
        Venda(string nomeCliente, Especialista *esp, string descricao, double valor):
        nomeCliente(nomeCliente), esp(esp), descricao(descricao), valor(valor){
            esp->comissao += esp->calculaComissao(valor);
        };
};
#endif