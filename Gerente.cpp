#include "Gerente.hpp"

Gerente::Gerente()
{}

Gerente::Gerente(std::string nome, int rg, int idade, double baseSalarial) :
        Funcionario(nome, rg, idade, baseSalarial)
{}

void Gerente::imprimeDados() 
{
    std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << nome << std::endl
        << "  Idade: " << idade << std::endl
        << "  RGFunc: " << rg << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << baseSalarial <<std::endl
        << "Salario Total: " << salarioTotal << std::endl;
}

void Gerente::adicionaBonificacao(int numTotalVendas)
{
    this->salarioTotal += numTotalVendas*bonificacao;
}