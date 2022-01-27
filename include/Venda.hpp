
#ifndef VENDA_H
#define VENDA_H

#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
  public:
    Venda(Cliente& cliente, Especialista& esp, std::string descricao, double valor);
    void imprime_dados();

 private:
    std::string _cliente, _esp, _descricao;
    double _valor;

};

#endif
