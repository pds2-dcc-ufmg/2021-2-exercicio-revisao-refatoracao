#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"

class Gerente: public Funcionario {
  public:
    Gerente(std::string nome, int idade, int rgFunc, double salarioBase, double bonifPorVenda);

    void imprime_dados() override;
    
    double calcula_bonificacao(int numTotalVendas);

    friend class FerramentaADM;
  
  private:
    double _bonifPorVenda;
    double _bonifTotal;
};

#endif

