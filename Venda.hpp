#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

  public:
    double _valor;
    string _descricao;
    Especialista _esp;
    string _cliente;

    void print();
};

#endif
