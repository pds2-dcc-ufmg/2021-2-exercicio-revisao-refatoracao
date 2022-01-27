#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente{
  public:
    string nome, endereco;
	  int cep;
    void print();
};

#endif
