
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
    protected:
        double _valor;
        std::string _descricao;
        Especialista* _esp;
        std::string _cliente;

    public:
        Venda(std::string cliente, Especialista* esp, std::string descricao, double valor);
        void imprimir_dados();
};

#endif
