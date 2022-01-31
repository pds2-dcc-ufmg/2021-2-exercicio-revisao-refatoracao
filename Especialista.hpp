#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

#include <string> 
#include <iomanip>

using namespace std;

class Especialista : public Funcionario {

   public:
    double comissao;
    int num_atendimentos;
    string especialidade;

    Especialista(string nome, int idade, int rg, double salario_base, string especialidade){
      this->rg = rg;
      this->nome = nome;
      this->idade = idade;
      this->salario_base = salario_base;
      this->especialidade = especialidade;

      this->comissao = 0;
      this->num_atendimentos = 0;
    }

    void calcular_comissao(double valor_venda) {
      this->comissao += valor_venda * perc;
    }

    void print() {
      cout << "[Especialista]" << endl
          << "[Funcionario]" << endl
          << "  Idade: " << idade << endl
          << "  RGFunc: " << rg << endl
          << "  Nome: " << nome << endl
          << "  SalarioBase: R$ " 
          << fixed << setprecision(2) << salario_base << endl
          << "Num Atendimentos: " << num_atendimentos << endl
          << "Salario Total: " << salario_base + comissao << endl;
    }

  private:
    double perc = 0.1;

};
#endif
