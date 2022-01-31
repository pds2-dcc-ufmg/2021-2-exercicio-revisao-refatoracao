#include <iostream>
#include <string>

#include "Especialista.hpp"

double Especialista::comissao(double valorVenda) {
    double c = valorVenda*perc;
    return c;
}

void Especialista::print() {
    std::cout << "[Especialista]" << endl;
    Funcionario::print();
    std::cout << "  Nome: " << nome << endl
              << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
}