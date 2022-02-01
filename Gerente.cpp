#include <iostream>
#include <string>
#include "Gerente.hpp"
#include "Venda.hpp"

void Gerente::imprimir()
{
    cout << "[Funcionario]" << endl
         << "[Gerente]" << endl
         << "  Nome: " << nome << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rg << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl
         << "Salario Total: " << salarioBase + bonificacao << endl;
}

void Gerente::calcularBonificacao(int qtdeVendas)
{
    bonificacao = qtdeVendas * valorBonificacao;
}