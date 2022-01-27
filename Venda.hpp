#ifndef VENDA_H
#define VENDA_H

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"

class Venda {
 public:
  double valor;
  std::string descricao;
  Especialista esp;
  std::string cliente;

  void print();
};

#endif
