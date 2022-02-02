#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print()
{
     cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: " << nome << endl
        << "  Idade: " << IDADE << endl
        << "  RGFunc: " << rgFunc << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}
double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas)
{
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
}

Gerente::Gerente(double SalarioBase, std::string IDADE, std::string nome,
                int rgFunc, double bonificacao)
{
    this->SalarioBase = SalarioBase;
    this->IDADE = IDADE;
    this->nome = nome;
    this->rgFunc = rgFunc;
    this->bonificacao = bonificacao;
}
