
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda
{

private:
    double valor;
    string descricao;
    Especialista especialista;
    Cliente cliente;

public:
    Venda(double valor, string descricao, Especialista &especialista, Cliente cliente);
    void print();
    Especialista getEspecialista();
};

#endif
