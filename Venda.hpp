#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

#include <iostream>
using namespace std;

class Venda{

    public:
    double valor;
    string descricao;
    Especialista especialista;
    string cliente;

    Venda () {};
    Venda(double valor, string descricao, Especialista especialista, string cliente); 
    void printVenda();
};

#endif
