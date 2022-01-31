#include "Especialista.hpp"
#include "Funcionario.hpp"
using namespace std;

double percentual = 0.1;

void Especialista::setEspecialidade(string especialidade) {
    this->Especialidade = especialidade;
}
string Especialista::getEspecialidade() {
    return this->Especialidade;
}

void Especialista::IncrementaComissao(double ValorVenda) {
    this->Comissao += ValorVenda * percentual;
}
double Especialista::getComissao() {
    return this->Comissao;
}

void Especialista::IncrementaAtendimentos() {
    NumAtendimentos++;
}

double Especialista::getNumAtendimentos() {
    return this->NumAtendimentos;
}

void Especialista::print() {
    cout << "[Especialista]" << endl
    << "[Funcionario]" << endl
    << "  Idade: " << Idade << endl
    << "  RGFunc: " << Rg << endl
    << "  Nome: " << Nome << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << endl
    << "Num Atendimentos: " << NumAtendimentos << endl
    << "Salario Total: " << SalarioBase + Comissao << endl;
}
