#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

/*
Essa eh a classe de uma venda realizada na empresa
*/

class Venda{

    public:
    Venda(Cliente *cliente, Especialista *especialista, std::string descricao, double valor); //construtor da classe
    void print(); //imprime os dados de uma venda 
    double getValor(); //acessa o valor da venda

    private:
        /*
        Atribuicoes relacionadas a uma venda
        */
        std::string _descricao; //servico solicitado pelo cliente
        Especialista* _especialista; //especialista que realizou o servico
        Cliente* _cliente; //cliente que realizou a compra
        double _valor; //valor total do servico
};

#endif
