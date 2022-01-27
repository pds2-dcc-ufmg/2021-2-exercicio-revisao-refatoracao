#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
 public:
  void print();  // imprime na tela os dados de um cliente cadastrado

  std::string _nome;
  std::string _endereco;
  std::string _cep;
};

#endif
