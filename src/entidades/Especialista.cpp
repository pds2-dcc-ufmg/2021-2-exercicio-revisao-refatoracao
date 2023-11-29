#include "Especialista.hpp"

static const double preco = 0.1;

void Especialista::comissao(double valorVenda) {
  _comissao += valorVenda * preco;
}

void Especialista::novoAtendimento() { _numAtendimentos++; }

int Especialista::getNumAtendimentos() const { return _numAtendimentos; }

double Especialista::salarioTotal() const { return _salarioBase + _comissao; }

void Especialista::print() const {
  std::cout << "[Especialista]" << endl;

  Funcionario::print();

  cout << "Num Atendimentos: " << _numAtendimentos << endl
       << "Salario Total: " << salarioTotal() << endl;
}

istream &operator>>(istream &in, Especialista &especialista) {
  std::getline(in, especialista._nome);
  std::getline(in, especialista._idade);
  in >> especialista._rgFunc;
  in >> especialista._salarioBase;
  in.ignore();
  std::getline(in, especialista._especialidade);

  return in;
}
