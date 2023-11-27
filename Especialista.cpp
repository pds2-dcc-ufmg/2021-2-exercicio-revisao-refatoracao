#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda) {
    return ValorVenda * perc;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
    std::cout << "  Nome: " << nome << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
}
