#ifndef Especialista_H
#define Especialista_H

#include "Cliente.hpp"
#include "Funcionario.hpp"

class Especialista : public Funcionario {
 public:
  std::string _especialidade;
  double _percentual = 0.1;

  double comissao(double ValorVenda);

  void print();
};

#endif
