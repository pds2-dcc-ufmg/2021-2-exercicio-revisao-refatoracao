#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valorBonificacao = 15.0;

class Gerente : public Funcionario{
  private:
    double bonificacao;

  public:
    Gerente (string nome,string idade,int rgFunc, double salarioBase){
      this->nome = nome;
      this->idade = idade;
      this->rgFunc = rgFunc;
      this->salarioBase = salarioBase;
    }

    double getBonificacao(){
      return bonificacao;
    }

    double getSalarioBase(){
      return salarioBase;
    }

    void setBonificacao(double bon){
      this->bonificacao = bon;
    }

    void print() {
      cout << "[Funcionario]" << endl
      << "[Gerente]" << endl
      << "  Nome: " << nome << endl
      << "  Idade: " << idade << endl
      << "  RGFunc: " << rgFunc << endl
      << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
    }

    double getBonificacaoGerente(int numTOTALVendas){
      return numTOTALVendas*valorBonificacao;
    }

};

#endif


