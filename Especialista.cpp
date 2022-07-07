#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*(0.1);
    return c;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout << "  Nome: " << nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salario_base << std::endl;
}