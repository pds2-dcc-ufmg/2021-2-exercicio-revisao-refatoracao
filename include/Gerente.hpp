#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"

class Gerente: public Funcionario {
  public:
    Gerente(std::string nome,
            int idade, int rgFunc, double salarioBase,
            std:: string especialidade,
            double bonificacao);

    void imprime_dados() override;
    
    double calcula_bonificacao(int numTotalVendas);
  
  private:
    double _bonificacao;
    double _valorBonificacao;
};

#endif

