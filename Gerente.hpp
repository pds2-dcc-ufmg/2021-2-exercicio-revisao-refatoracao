#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente:public Funcionario{
  public:
    int bonificacao;
  
    void print() {
      cout << "[Funcionario]" << endl << "[Gerente]" << endl << "Nome: " << nome << endl << "Idade: " << idade << endl
      << "Numero do RG: " << rgNumber << endl << "SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
    }

    double calculaBonificacaoGerente(int numTotalVendas){
      return numTotalVendas*bonificacao;
    }
};

#endif
