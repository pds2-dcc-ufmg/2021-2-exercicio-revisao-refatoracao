
#include "Gerente.hpp"

#include <iostream>
#include <iomanip>


Gerente::Gerente(
    const unsigned idade,
    const double salario_base,
    std::string nome,
    std::string rg_func)
    :
    Funcionario(
        idade,
        salario_base,
        std::move(nome),
        std::move(rg_func))
    {}


void Gerente::print() const {
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "[Funcionario]\n";
    std::cout << "[Gerente]\n";
    std::cout << "  Nome: " << this->nome << '\n';
    std::cout << "  Idade: " << this->idade << '\n';
    std::cout << "  RGFunc: " << this->rg << '\n';
    std::cout << "  SalarioBase: R$ " << this->salario_base << '\n';
    std::cout << "Salario Total: " << this->salario_base + this->bonus_total << '\n';
}

void Gerente::adicionar_bonus(const double valor_venda) {
    const double bonus_por_atendimento = 15;

    this->bonus_total += bonus_por_atendimento;
    this->num_atendimentos++;
}
