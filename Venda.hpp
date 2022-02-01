
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
    string cliente;

    Venda(string c, Especialista e, string d, double v) 
        : cliente(c), descricao(d), VALOR(v), 
          esp(Especialista(e.nome, e.IDADE, e.rgFunc, e.SalarioBase, e.especialidade)) {};

    void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;

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
