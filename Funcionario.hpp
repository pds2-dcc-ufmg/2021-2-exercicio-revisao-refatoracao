#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iomanip>
#include <iostream>

class Funcionario {
 public:
  double _salario_base;  // valor m�nimo recebido pelo funcion�rio
  std::string _idade;
  std::string _nome;
  int _rgFunc;

  void print();
};

#endif
