#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
  public:
    void imprime_dados();
  
  private:
	std::string nome, endereco, cep;
};

#endif
