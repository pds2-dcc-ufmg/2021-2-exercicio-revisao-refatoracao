#include <iostream>
#include <string>
#include "Gerente.hpp"
#include "Venda.hpp"

void Gerente::imprimir()
{
    std::cout << "[Gerente]" << endl;
    Funcionario::imprimir();
    calculaBonificacao(Venda::getNumVendas());
    cout << "Salario Total: " << salarioBase + bonificacao << std::endl;
}

void Gerente::calculaBonificacao(int numVendas)
{
    bonificacao = numVendas * valorBonificacao;
}