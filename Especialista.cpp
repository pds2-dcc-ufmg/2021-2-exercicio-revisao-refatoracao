#include "Especialista.hpp"
#include <iostream>
#include <iomanip>

const double perc = 0.1;

void Especialista::Comissao(double ValorVenda) {

    comiss += ValorVenda*perc;

}

void Especialista::print() const {

    std::cout << "[Funcionario]" << std::endl
    << "[Especialista]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  RGFunc: " << rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;

}

void Especialista::AtendeuCliente() {

    numAtendimentos++;

}