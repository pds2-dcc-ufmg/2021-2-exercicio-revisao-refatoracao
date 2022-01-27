#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iomanip>
#include <iostream>

class Funcionario {
  public:
    virtual void imprime_dados() = 0;
    friend class Venda;

  protected:
    std::string _nome;
    int _idade, _rgFunc;
    double _salarioBase;
};

#endif