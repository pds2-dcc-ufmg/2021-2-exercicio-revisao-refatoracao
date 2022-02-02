#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double valorBonificacao = 15.0;

class Gerente {
      public:
         double salarioBase;
         string idade;
         string nome;
         int rgFunc;
         double bonificacao;

         void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << IDADE << endl
            << "  RG do Funcionário: " << rgFunc << endl
            << "  Salario Base: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
         }

         double calcula_BONIFICACAO_GERENTE(int numTotalVendas){
             double valor;
             return numTotalVendas*ValorBonificacao;
         }
};

#endif
