
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:
        double VALOR;
        std::string descricao;
        Especialista esp;
        std::string cliente;


    void print() {
        std::cout << "Especialista: ";
        std::cout << esp.nome;

        std::cout << " Cliente: ";
        std::cout << cliente;

        //std::cout << " : ";
        //cout << cliente;
    }

    /*void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
