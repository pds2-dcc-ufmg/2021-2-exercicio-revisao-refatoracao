
#include "Funcionario.hpp"

#include <iostream>


Funcionario::Funcionario(
    const unsigned idade,
    const double salario_base,
    std::string nome,
    std::string rg)
    :
    idade(idade),
    num_atendimentos(0),
    salario_base(salario_base),
    bonus_total(0),
    nome(std::move(nome)),
    rg(std::move(rg)) {}

void Funcionario::print() const {
    std::cout << "[Funcionario]\n";
    std::cout << "  Idade: " << this->idade << '\n';
    std::cout << "  RGFunc: " << this->rg << '\n';
}

const std::string &Funcionario::get_nome() const {
    return this->nome;
}
