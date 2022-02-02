#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



class Gerente : public Funcionario
{
  private:
    double bonificacao;

  public:
    //Setter
    void set_bonificacao(double bonificacao_inserida);

    //Getter
    double get_bonificacao();

    void print();
    double calcula_bonificacao_gerente(int num_vendas);
};

#endif