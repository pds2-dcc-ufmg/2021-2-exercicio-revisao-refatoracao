#ifndef VENDA_HPP
#define VENDA_HPP

#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public: 
        Venda(double _valor, string _descricao, Especialista _especialista, Cliente _cliente);

        void printNomesEspecialistaCliente();

        double getValor();
        string getDescricao();
        string getNomeEspecialista();
        Cliente getNomeCliente();

        void setValor(double _valor);
        void setDescricao(string _descricao);
        void setEspecialista(Especialista _especialista);
        void setCliente(Cliente _cliente);

    protected:
        double valor;
        string descricao;
        Especialista especialista = Especialista();
        Cliente cliente = Cliente();

};

#endif
