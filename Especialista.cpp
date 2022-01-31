
#include "Especialista.hpp"

#include <iostream>
#include <iomanip>


Especialista::Especialista(
    const unsigned idade,
    const double salario_base,
    std::string nome,
    std::string rg_func,
    std::string especialidade)
    :
    Funcionario(idade, salario_base, std::move(nome), std::move(rg_func)),
    especialidade(std::move(especialidade)) {}


void Especialista::adicionar_bonus(const double valor_venda) {
    this->bonus_total += Especialista::calcular_comissao(valor_venda);
    this->num_atendimentos++;
}

void Especialista::print() const {
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "[Especialista]\n";
    Funcionario::print();
    std::cout << "  Nome: " << this->nome << '\n';
    std::cout << "  SalarioBase: R$ " << this->salario_base << '\n';
    std::cout << "Num Atendimentos: " << this->num_atendimentos << '\n';
    std::cout << "Salario Total: " << this->salario_base + this->bonus_total << '\n';
}

double Especialista::calcular_comissao(const double valor_venda) {
    const double comissao = 0.1;
    return valor_venda * comissao;
}
