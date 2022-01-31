#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:

        virtual void print();


    private:
        double valor;

        Especialista esp;

        std::string descricao;
        std::string cliente;
};

#endif
