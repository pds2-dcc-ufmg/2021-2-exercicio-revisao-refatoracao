#include <iostream>

#include <string>
#include "Gerente.hpp"

using namespace std;

const double bonificacaoValor = 15.0;

Gerente::Gerente(double salarioBase, int idade, string nome, int rgFunc) : Funcionario(salarioBase, idade, nome, rgFunc), numeroDeVendas(0){};

void Gerente::print()
{
    cout << "[Gerente] " << endl;
    Funcionario::print();
    cout << "  SalarioBase: R$ " << fixed << setprecision(2) << this->salarioBase << endl
         << "  Salario Total: " << this->getSalarioTotal() << endl;
}

double Gerente::getBonificacao()
{
    return this->numeroDeVendas * bonificacaoValor;
}

void Gerente::addVendas(int numeroDeVendas)
{
    this->numeroDeVendas = numeroDeVendas;
}

double Gerente::getSalarioTotal()
{
    return this->salarioBase + this->getBonificacao();
}
