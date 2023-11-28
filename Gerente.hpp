#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

class Gerente {

  public:
    double SalarioBase; // valor mínimo recebido pelo funcionário
    std::string IDADE;
    std::string nome;
    int rgFunc;
    double bonificacao;

    void print();

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif
