#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "Especialista.hpp"

using namespace std;

class Gerente : public Funcionario {
  public:
    double bonificacao = 15.0;

    Gerente(string nome, int idade, int rg, double salario_base){
      this->rg = rg;
      this->nome = nome;
      this->idade = idade;
      this->salario_base = salario_base;
    }

    void print() {
        cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: " << nome << endl
        << "  Idade: " << idade << endl
        << "  RGFunc: " << rg << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base << endl
        << "Salario Total: " << salario_base + bonificacao << endl;
    }

    void calcular_bonificacao(vector<Especialista*> especialistas){
      int num_vendas = 0;

      for(int i = 0; i < especialistas.size(); i++){
        num_vendas += especialistas[i]->num_atendimentos;
      }

      this->bonificacao = num_vendas * bonificacao;
    }
};

#endif
