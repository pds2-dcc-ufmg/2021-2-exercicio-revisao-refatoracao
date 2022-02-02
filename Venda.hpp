
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:

        double _valor;
        void print(); 

        Venda(double valor, std::string descricao, Especialista esp, Cliente cliente);


    private:
        std::string _descricao;
        Cliente _cliente;
        Especialista _esp;


};

#endif
