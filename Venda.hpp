
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    private:
    double ValorVenda;
    std::string Descricao;
    Especialista* _Especialista;
    Cliente* _Cliente;


    public:

    Venda(double ValorVenda, std::string Descricao, Especialista* Especialista, Cliente* Cliente);    

    void Print();

        //std::cout << " : ";
        //cout << cliente;

    /*void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
