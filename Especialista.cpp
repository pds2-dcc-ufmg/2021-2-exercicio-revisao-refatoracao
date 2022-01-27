#include <iostream>
#include <iomanip>
#include <string>
#include "Especialista.hpp"

void Especialista::setEspecialidade(std::string especialidade) {
    this->especialidade = especialidade;
}

void Especialista::print()  {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout << "  Nome: " << getNome() << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << getSalarioBase() << std::endl;
}

double Especialista::comissao(double valorVenda) {
    return valorVenda*porcentagem;
}