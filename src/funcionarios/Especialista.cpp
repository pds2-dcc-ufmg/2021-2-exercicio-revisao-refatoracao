#include "Especialista.hpp"

Especialista::Especialista(std::string nome, std::string rgFunc, int idade, double salarioBase, std::string especialidade)
{
    this->nome = nome;
    this->rgFunc = rgFunc;
    this->idade = idade;
    this->salarioBase = salarioBase;
    this->especialidade = especialidade;
    this->salarioFinal = salarioBase;
}

void Especialista::realizaAtendimento(double ValorVenda)
{
    this->salarioFinal += ValorVenda * TAXA_COMISSAO;
    numAtendimentos++;
}

void Especialista::print()
{
    std::cout << "[Especialista]" << std::endl;

    Funcionario::print();

    std::cout << "  Num Atendimentos: " << numAtendimentos << std::endl
              << "  Salario Total: " << salarioFinal << std::endl;
}

std::string Especialista::getNome()
{
    return this->nome;
}

int Especialista::getNumAtendimentos()
{
    return this->numAtendimentos;
}