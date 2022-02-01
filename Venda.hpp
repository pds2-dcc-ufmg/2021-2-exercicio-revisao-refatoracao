
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "RelatorioVendas.hpp"


class Venda{

    public:
    double valor;
    std::string descricao;
    Especialista esp;
    Cliente cliente;
    Venda(Cliente,Especialista,std::string,double);

    void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente.nome;
    }
};

#endif
