#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>

class Funcionario {
  public:
    virtual void imprime_dados() = 0;

  protected:
    std::string _nome;
    int _idade, _rgFunc;
    double _salarioBase;
};

#endif