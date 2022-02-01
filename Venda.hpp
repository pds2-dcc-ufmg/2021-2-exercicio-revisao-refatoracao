
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"

using namespace std;

class Venda{
    public:
    double valorVenda;
    string descricao;
    Especialista* especialista;
    Cliente* cliente;
    void print();
    Venda(Cliente* cliente, Especialista* especialista, std::string descricao, double valorVenda);
};

#endif