#ifndef Especialista_HPP
#define Especialista_HPP

#include <iomanip>
#include "Funcionario.hpp"

using namespace std;


class Especialista : public Funcionario {

  public:
    double comissao;
    int numAtendimentos;
    string especialidade;

    Especialista(string nome, int idade, int rg, double salarioBase, string especialidade){
      this->rg = rg;
      this->nome = nome;
      this->idade = idade;
      this->salarioBase = salarioBase;
      this->especialidade = especialidade;
      
      this->comissao = 0;
      this->numAtendimentos = 0;
    }

    void calcula_comissao(double valorVenda) {
      this->comissao += valorVenda * perc;
    }

    void print() {
      cout << "[Especialista]" << endl
          << "[Funcionario]" << endl
          << "  Idade: " << idade << endl
          << "  RGFunc: " << rg << endl
          << "  Nome: " << nome << endl
          << "  SalarioBase: R$ " 
          << fixed << setprecision(2) << salarioBase << endl
          << "Num Atendimentos: " << numAtendimentos << endl
          << "Salario Total: " << salarioBase + comissao << endl;
    }
  
  private:
    double perc = 0.1;

};

#endif
