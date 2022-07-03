
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"

using namespace std;

class Venda {
 public:
  double VALOR;
  string descricao;
  Especialista esp;
  string cliente;

  void print() {
    cout << "Especialista: ";
    cout << esp.nome;

    cout << " Cliente: ";
    cout << cliente;

  }


};

#endif
