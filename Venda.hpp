#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

#ifndef VENDA_HPP
#define VENDA_HPP

class Venda{

    private:
        
        double valor;
        std::string descricao;
        std::string cliente;
        Especialista esp;

    public:

        void setValor(double valor);
        void setDescricao(std::string descricao);
        void setCliente(std::string cliente);
        
        void print(); // imprime na tela os dados da venda
}

#endif
