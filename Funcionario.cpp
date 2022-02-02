#include <iostream>
#include <string>
#include "funcionario.hpp"

void Funcionario::print() {

    std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl;
}

void Funcionario::print_oi() {

    std::cout << "Tchau" << std::endl;

}   

void Especialista::print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;

}

double Especialista::comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }