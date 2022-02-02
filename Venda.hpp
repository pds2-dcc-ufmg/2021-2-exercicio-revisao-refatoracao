
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
    double valor;
    string descricao;
    Especialista esp;
    string cliente;

    Venda(){}
    Venda(string cliente, Especialista esp, string descricao, double valor) 
        : cliente(cliente), esp(esp), descricao(descricao), valor(valor){
        }

    void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;

    }
};

#endif
