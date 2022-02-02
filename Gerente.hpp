#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario{
    public:

      double _bonificacao;
     
      void print();
      double calcular_bonificacao_gerente(int num_total_vendas);
      
    private:

      double _valor_da_bonificacao = 15.0;
};

#endif
