#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda {

    public:
    
    double valor;
    string cliente;
    string descricao;
    Especialista especialista;

    void print();

};

#endif
