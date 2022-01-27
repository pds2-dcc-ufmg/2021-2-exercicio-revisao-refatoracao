
#ifndef VENDA_H
#define VENDA_H

#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

  public:
    void imprime_dados();

 private:
    double _valor;
    std::string _descricao, _cliente;
    Especialista _esp;

};

#endif
