
#ifndef VENDA_H
#define VENDA_H

#include "Cliente.hpp"
#include "Especialista.hpp"

#include <iostream>
#include <string>

class Venda{

    public:
    
        Venda(double valor, std::string descricao, Especialista* especialista, Cliente* cliente);
        void setValor(double valor);
        void setDescricao(std::string descricao);
        void setEspecialista(Especialista* especialista);
        void setCliente(Cliente* cliente);
        double getvalor();
        std::string getDescricao();
        Especialista* getEspecialista();
        Cliente* getCliente();
        void adicionarComissao();
        void print();

    private:

        double valor;
        std::string descricao;
        Especialista* especialista;
        Cliente* cliente;

};

#endif
