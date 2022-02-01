#include "Especialista.hpp"

Especialista::Especialista()
{}

Especialista::Especialista(std::string nome, int rg, int idade, double baseSalarial, std::string especialidade) :
        Funcionario(nome, rg, idade, baseSalarial), especialidade(especialidade)
{}

void Especialista::imprimeDados() 
{
    std::cout << "[Especialista]" << std::endl
        << "[Funcionario]" << std::endl
        << "  Idade: " << idade << std::endl
        << "  RGFunc: " << rg << std::endl
        << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << baseSalarial <<std::endl
        << "Num Atendimentos: " << numAtendimentos << std::endl
        << "Salario Total: " << salarioTotal << std::endl;
}

void Especialista::adicionaComissao(double valorDaVenda) 
{
    this->salarioTotal += valorDaVenda*percentualPorVenda;
}

void Especialista::adicionaAtendimento()
{
    this->numAtendimentos++;
}