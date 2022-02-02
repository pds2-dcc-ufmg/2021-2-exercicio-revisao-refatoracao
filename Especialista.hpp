#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {

  public:
    string _especialidade;
    
    double calcular_comissao(double _valor_venda);
    void print();

  private:
    double _perc_comissao = 0.1;
};

#endif
