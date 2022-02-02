#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <string>

using namespace std;

class Especialista : public Funcionario 
{
  private:
    string especialidade;

  public:
    //Getter
    string get_especialidade();
    //Setter
    void set_especialidade(string especialidade_inserida);
    
    double get_comissao(double ValorVenda);
    void print();

};

#endif