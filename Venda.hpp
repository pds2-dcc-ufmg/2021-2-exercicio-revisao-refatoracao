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
        std::cout << cliente; // adc std

    } // apaguei os comentarios 

};

#endif