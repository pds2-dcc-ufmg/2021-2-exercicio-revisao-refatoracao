#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"
#include <iostream>
#include <string>

using namespace std;

class Venda{
    private:
        Cliente& _cliente; //referencia a uma classe do tipoe cliente
        Especialista& _especialista;
        string _descricao;
        double _valor;
        

    public:

        static int num_vendas;
        Venda(Cliente& cliente, Especialista& especialista, const string& descricao, double valor);
        // void setVenda(Cliente& cliente, Especialista& especialista, const string& descricao, double valor);
        void print();
        string getDescricao();
        double getValor();
        int getNumVendas();
};

#endif