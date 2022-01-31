#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <vector>

#include "Especialista.hpp"

using namespace std;

class Gerente : public Funcionario {
  public:
    double bonificacao = 15.0;

    Gerente(string nome, int idade, int rg, double salarioBase){
      this->rg = rg;
      this->nome = nome;
      this->idade = idade;
      this->salarioBase = salarioBase;
    }

    void print() {
        cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: " << nome << endl
        << "  Idade: " << idade << endl
        << "  RGFunc: " << rg << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl
        << "Salario Total: " << salarioBase + bonificacao << endl;
    }

    void calcula_bonificacao(vector<Especialista*> especialistas){
      int numVendas = 0;

      for(int i = 0; i < especialistas.size(); i++){
        numVendas += especialistas[i]->numAtendimentos;
      }

      this->bonificacao = numVendas * bonificacao;
    }

};

#endif

