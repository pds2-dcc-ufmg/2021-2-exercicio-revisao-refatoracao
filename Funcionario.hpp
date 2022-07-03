#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iomanip>
#include <iostream>

using namespace std;

class Funcionario {
 public:
  double salarioBase; 
  string idade;
  string nome;
  int rgFunc;

  void print();

  void print_tchau();
};

#endif
