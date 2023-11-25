#include "Gerente.hpp"
#include <iostream>

using namespace std;

Gerente::Gerente(const std::string& nome, const std::string& idade, const int& rgFunc, const double& salarioBase, const double& bonificacao)
: Funcionario(nome, idade, rgFunc, salarioBase), bonificacao(bonificacao) {}

double Gerente::getBonificacao(){
  return bonificacao;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*getBonificacao();
}

        void Gerente::print() {
           cout << "[Gerente]" << endl;
           Funcionario::print();
           cout << "  SalarioBase: R$ " << fixed << setprecision(2) <<            getSalarioBase() << endl
             << "\n";
        }