#ifndef ESPECIALISTA_H
#define ESPECIALISTA_H

#include "Funcionario.hpp"

class Especialista : public Funcionario {
  public:
    Especialista(std::string nome,
                 int idade, int rgFunc, double salarioBase,
                 std:: string especialidade,
                 double perc);

    double comissao(double ValorVenda);

    void imprime_dados() override;

    void novo_atendimento();

    friend class Venda;

  private:
    std::string _especialidade;
    double _perc, _comissao;
    int _numAtendimentos;
};

#endif
