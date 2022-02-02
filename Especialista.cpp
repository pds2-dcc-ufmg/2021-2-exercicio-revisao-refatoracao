#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"

double PERCENTUAL = 0.1;

Especialista::Especialista(double salarioBase, string idade, string nome, int rgFunc, string especialidade){
    this->salarioBase = salarioBase;
    this->idade = idade;
    this->nome = nome;
    this->rgFunc = rgFunc;
    this->especialidade = especialidade;
}

double Especialista::comissao(double valorVenda){
  double valorComissao = valorVenda * PERCENTUAL;
    return valorComissao;
}

void Especialista::printEspecialista(){
  cout << "[Especialista]" << endl;
  Funcionario::printFuncionario();

  cout << "  Nome: " << nome << endl
  << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
}