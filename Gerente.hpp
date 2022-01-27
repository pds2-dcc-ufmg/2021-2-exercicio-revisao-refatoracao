#ifndef GERENTE_H
#define GERENTE_H

#include <iomanip>
#include <iostream>

const double VALORBONIFICACAO = 15.0;

class Gerente {
 public:
  double salario_base;  // valor m�nimo recebido pelo funcion�rio
  std::string idade;
  std::string nome;
  int rgFunc;
  double bonificacao;

  void print();

  double calcula_Bonificacao_Gerente(int num_total_vendas);
};

#endif
