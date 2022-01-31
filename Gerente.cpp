#include "Gerente.hpp"
#include "Funcionario.hpp"
using namespace std;

double ValorBonificacao = 15.0;

void Gerente::CalculaBonificacao(double NumTotalVendas) {
    this->Bonificacao = NumTotalVendas * ValorBonificacao;
}
double Gerente::getBonificacao() {
    return this->Bonificacao;
}

void Gerente::print() {
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << Nome << endl
    << "  Idade: " << Idade << endl
    << "  RGFunc: " << Rg << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << endl
    << "Salario Total: " << SalarioBase + Bonificacao << endl;
}
