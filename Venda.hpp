#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

/*
Classe que representa uma venda realizada na empresa
*/
class Venda {

    public:
    
        //metodo construtor da classe
        Venda(std::string descricao = " ",
              Especialista esp = Especialista(),
              Cliente cliente = Cliente(), 
              double valor = 0);

        //retorna o valor da venda
        double getvalor();

        //imprime na tela as informacoes da venda
        void imprime_venda();

    private:
    
        /*
        Dados relacionados a venda
        */
        std::string _descricao; //servico solicitado pelo cliente
        Especialista _esp; //especialista solicitado pelo cliente
        Cliente _cliente; //cliente realizador da compra
        double _valor; //valor cobrado pelo servico

};

#endif
