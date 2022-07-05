#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda {

    public:
        void print();
        double getValorTotal();
        string getDescricao();
        Especialista * getEspecialista();
        Cliente * getCliente();        
        void setValorTotal(double valorTotal);
        void setDescricao(string descricao);
        void setEspecialista(Especialista *especialista);
        void setCliente(Cliente *cliente);

    private:
        double valorTotal;
        string descricao;
        Especialista *especialista;
        Cliente *cliente;
};

#endif