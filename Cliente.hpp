#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>

using namespace std;

class Cliente {
 public:
  string nome;
  string endereco;
  string cep;
  string alturaDosPais;

  void print();
};

#endif
