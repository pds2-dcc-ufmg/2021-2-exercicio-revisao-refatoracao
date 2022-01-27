#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:

    Venda(double VALOR = 0,
            string descricao = "",
            Especialista esp = Especialista(),
            string cliente = "");

    double VALOR;
    string descricao;
    Especialista esp;
    string cliente;

    //Imprime informações sobre a venda
    void print();

};

#endif
