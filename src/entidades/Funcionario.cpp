#include "Funcionario.hpp"

void Funcionario::print() const {
    cout << fixed << setprecision(2) <<
    "[Funcionario]"                      << endl <<
    "  Idade: "          << _idade       << endl <<
    "  RGFunc: "         << _rgFunc      << endl <<
    "  Nome: "           << _nome        << endl <<
    "  SalarioBase: R$ " << _salarioBase << endl;
}

string Funcionario::getNome() const{
    return _nome;
}

double Funcionario::salarioTotal() const {
    return _salarioBase;
}
