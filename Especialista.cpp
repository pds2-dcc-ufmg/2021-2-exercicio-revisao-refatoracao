#include <iostream>
#include <string>

#include "Especialista.hpp"

double perc = 0.1;

double Especialista::calculaComissao(double valorVenda) {
    numAtendimentos++;
    return valorVenda*perc;
}

void Especialista::print() {
    std::cout << "[Especialista]" << endl;
    Funcionario::print();
    std::cout << "  Nome: " << nome << endl
              << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl
              << "Num Atendimentos: " << numAtendimentos   << endl
              << "Salario Total: " << salarioBase+comissao <<endl;
}