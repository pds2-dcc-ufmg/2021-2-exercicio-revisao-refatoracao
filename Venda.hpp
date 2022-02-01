
#ifndef VENDA_HPP
#define VENDA_HPP

#include <iostream>

class Venda
{

public:
    Venda(double valor,
          std::string descricao,
          std::string nomeEspecialista,
          std::string cliente);

    void print();

    double getValor();

private:
    double valor;
    std::string descricao;
    std::string nomeEspecialista;
    std::string cliente;
};

#endif
