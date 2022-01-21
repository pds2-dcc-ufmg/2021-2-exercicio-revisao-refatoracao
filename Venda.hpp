
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
    double VALOR;
    string descricao;
    Especialista esp;
    Cliente cliente;

    void setCliente(string c){
        this->cliente.nome=c;
    }

    void print() {

        std::cout << "Especialista: ";
        cout << esp.getNome();

        std::cout << " Cliente: ";
        cout << cliente.nome;

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
