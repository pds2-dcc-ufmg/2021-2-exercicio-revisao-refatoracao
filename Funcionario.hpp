#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
  public:
    double salarioBase;
    string idade, nome;
    int rgFunc;

    void print() {
      cout << "[Funcionario]" << endl << "Idade: " << idade << endl << "RGFunc: " << rgFunc << endl;
    }
};

#endif
