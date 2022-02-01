#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

#ifndef VENDA_HPP
#define VENDA_HPP

class Venda{

    public:
        
        double VALOR;
        std::string descricao;
        Especialista esp;
        std::string cliente;


        void print() {

            std::cout << "Especialista: ";
            cout << esp.nome;

            std::cout << " Cliente: ";
            cout << cliente;
        }
}

#endif
