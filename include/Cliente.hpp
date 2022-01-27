#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

class Cliente{
  public:
    void imprime_dados();
  
  private:
	std::string _nome, _endereco, _cep;
};

#endif
