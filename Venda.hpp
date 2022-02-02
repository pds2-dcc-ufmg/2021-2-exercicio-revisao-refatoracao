#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include <string>

using namespace std;

class Venda{
    public:

    Venda(){}
    
    Venda(double VALOR, string descricao, Especialista esp, Cliente cliente);

    void print();
    
    double VALOR;
    string descricao;
    Especialista esp;
    Cliente cliente;

};
#endif
