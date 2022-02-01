#include <iostream>
#include <string>

#include "Especialista.hpp"

double perc = 0.1;

double Especialista::calculaComissao(double valorVenda) {
    numAtendimentos++;
    return valorVenda*perc;
}

void Especialista::print() {
    std::cout << "[Especialista]" << endl
              << "[Funcionario]" << endl
              << "  Idade: " << idade << endl
              << "  RGFunc: " << rgFunc << endl 
              << "  Nome: " << nome << endl
              << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl
              << "Num Atendimentos: " << numAtendimentos   << endl
              << "Salario Total: " << salarioBase+comissao <<endl;
}