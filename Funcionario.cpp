#include "Funcionario.hpp"

void Funcionario::print() {
    cout << "[Funcionario]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << IDADE << endl
    << "  RGFunc: " << rgFunc << endl
    << " SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}