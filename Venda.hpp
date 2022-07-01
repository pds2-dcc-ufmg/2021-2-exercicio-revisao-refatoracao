
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    private:
    double VALOR;
    string descricao;
    Especialista esp;
    string cliente;

    public:

    void print();
};

#endif
