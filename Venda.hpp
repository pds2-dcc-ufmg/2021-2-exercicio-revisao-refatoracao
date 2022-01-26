
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
  public:
    double valor;
    string descricao, cliente;
    Especialista esp;
    
    void print(){
      cout << "Especialista:" << esp.nome << endl << "Cliente: " << cliente;
    }
};

#endif
