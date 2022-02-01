#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
  protected:
    double salarioBase; 
    string idade;
    string nome;
    int rgFunc;

  public:
    void print() {
      cout << "[Funcionario]" << endl
      << "  Idade: " << idade << endl
      << "  RGFunc: " << rgFunc << endl;
    }
};

#endif

