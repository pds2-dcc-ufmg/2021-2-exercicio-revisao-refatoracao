#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"

double perc = 0.1;

double Especialista::comissao(double valorvenda) {
    return valorvenda * perc;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout << "  Nome: " << this->nome << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salariobase << std::endl;
}