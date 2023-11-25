#include "Especialista.hpp"
#include <iostream>

using namespace std;

Especialista::Especialista(const std::string& nome, const std::string& idade, const int& rgFunc, const double& salarioBase, const std::string& especialidade, const double& comissao, const int& numAtendimentos)
    : Funcionario(nome, idade, rgFunc, salarioBase), especialidade(especialidade),         
      comissao(comissao), numAtendimentos(numAtendimentos) {}

  std::string Especialista::getEspecialidade(){
      return especialidade;
  }

  double Especialista::getComissao(){
    return comissao;
  }

  int Especialista::getNumAtendimentos() {
      return numAtendimentos;
  }

  double Especialista::getTotalvendas(){
    return totalVendas;
  }

    void Especialista::incrementarAtendimento() {
        numAtendimentos++;
    }

    double Especialista::acumulaVenda(double valorVenda) {
      totalVendas += (valorVenda * comissao);
      return totalVendas;
    }

    void Especialista::print() {
        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();
        std::cout << "Especialidade: " << especialidade << std::endl;
        std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << endl
          << "\n";
    }

