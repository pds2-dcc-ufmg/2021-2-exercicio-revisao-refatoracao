
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    private:
        double _valor;
        std::string _descricao;
        Especialista _especialista;
        Cliente _cliente;

    public:

        Venda();
        Venda(double valor, std::string descricao, Especialista* especialista, Cliente* cliente);

        void print();
};

#endif
