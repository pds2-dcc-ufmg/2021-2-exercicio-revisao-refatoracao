#include "Gerente.hpp"

void Gerente::print()
{
    std::cout << "[Funcionario]" << std::endl
         << "[Gerente]" << std::endl
         << "  Nome: " << nome << std::endl
         << "  Idade: " << idade << std::endl
         << "  RGFunc: " << rg << std::endl
         << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl
         << "Salario Total: " << salarioTotal << std::endl;
}

double Gerente::calculaBonificacao(int numTotalVendas)
{
    return numTotalVendas * 15;
}

void Gerente::calculaSalarioTotal(int numtTotalVendas){
    double bonificacao = calculaBonificacao(numtTotalVendas);

    salarioTotal = salarioBase + bonificacao;
}