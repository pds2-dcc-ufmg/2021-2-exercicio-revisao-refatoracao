#ifndef ESPECIALISTA_H
#define ESPECIALISTA_H

#include "Funcionario.hpp"
#include "Cliente.hpp"


class Especialista : public Funcionario {
  public:
    double comissao(double ValorVenda);

    void imprime_dados() override;

  private:
    std::string _especialidade;
    double _perc;
};

#endif
