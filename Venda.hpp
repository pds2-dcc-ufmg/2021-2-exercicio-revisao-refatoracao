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

        void print(); // imprime na tela os dados da venda
}

#endif
