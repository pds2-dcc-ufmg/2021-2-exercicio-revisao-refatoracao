
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
    double _valor;
    string _descricao;
    Especialista _esp;
    Cliente _cliente;


    void print() {

        std::cout << "Especialista: ";
        cout << esp._nome;

        std::cout << " Cliente: ";
        std::cout << cliente._nome;
    }

};

#endif
