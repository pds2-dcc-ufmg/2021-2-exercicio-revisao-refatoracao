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

    Venda(double VALOR = 0, string descricao = "", Especialista esp = 0, string cliente = "");

    void print();

    void Aumentocomissao();

    void contaAtendimentos();
};

#endif
