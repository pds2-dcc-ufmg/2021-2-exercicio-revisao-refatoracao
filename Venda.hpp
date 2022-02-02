
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    private:
    
    double Valor;
    string Descricao;
    Especialista Esp;
    string Cliente;


    void print() {

        std::cout << "Especialista: " << Esp.nome << std::endl;
        std::cout << " Cliente: " << Cliente << std::endl;

    }

    /*void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
