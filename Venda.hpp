////////
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
    public:

    double Valor;
        std::string descricao;
        Especialista esp;
        std::string cliente;

        void print() {
            std::cout << "Especialista: "<< std::endl;
            std::cout << esp.Nome << std::endl;

            std::cout << " Cliente: "<< std::endl;
            std::cout << cliente<< std::endl;
       }
};

#endif
