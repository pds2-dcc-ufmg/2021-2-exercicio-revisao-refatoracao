#include "Funcionario.hpp"

Funcionario::Funcionario()
{}

Funcionario::~Funcionario()
{}

Funcionario::Funcionario(std::string nome, int idade, int rg,double baseSalarial) :
        nome(nome), rg(rg), idade(idade), baseSalarial(baseSalarial), salarioTotal(baseSalarial)
{}

std::string Funcionario::getNome()
{
        return this->nome;
}