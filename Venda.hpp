
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

    Venda(double Valor = 0, string descricao = " ", Especialista esp = NULL, string cliente = " ");

    void print();

};

#endif
