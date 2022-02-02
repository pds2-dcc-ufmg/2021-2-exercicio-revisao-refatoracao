
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    private:
        double valor;
        string descricao;
        Especialista esp;
        string cliente;

    public:
        double getValor();
        void setValor(double valorNovo);

        string getDescricao();
        void setDescricao(string descricaoNovo);

        string getCliente();
        void setCliente(string clienteNovo);
    
        Especialista getEsp();
        void setEsp(Especialista espNovo);
    
        void print();
};

#endif
