#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

class Cliente{
  public:
    friend class Venda;
    Cliente(std::string nome, std::string endereco, std::string cep);
    void imprime_dados();
  
  private:
	std::string _nome, _endereco, _cep;
};

#endif
