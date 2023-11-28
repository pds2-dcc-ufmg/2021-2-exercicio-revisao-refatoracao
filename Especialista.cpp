#include "Especialista.hpp"

double perc = 0.1;

double Especialista::comissao(double ValorVenda) {
    return ValorVenda * perc;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print(); // chamando a função print da classe base (Funcionario)
    std::cout << "  Nome: " << nome << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
}

double Especialista::getSalarioTotal() {
    return salarioBase + comissao(0); // comissão deve ser incluída no salário total
}


